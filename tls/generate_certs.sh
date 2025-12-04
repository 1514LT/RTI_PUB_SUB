#!/bin/bash

# RTI DDS Security 证书生成脚本
# 用于生成完整的身份认证和权限管理证书体系

echo "========================================"
echo "RTI DDS Security 证书生成工具"
echo "========================================"

# 清理旧文件（如果存在）
echo "清理旧证书文件..."
rm -f *.pem *.csr *.srl

# ========================================
# 步骤 1: 创建 Identity CA（身份证书颁发机构）
# ========================================
echo ""
echo "步骤 1: 创建 Identity CA..."

# 生成 CA 私钥（2048位 RSA）
openssl genrsa -out ca_key.pem 2048

# 生成 CA 自签名证书（有效期10年）
openssl req -x509 -new -nodes -key ca_key.pem -sha256 -days 3650 \
  -out ca_cert.pem \
  -subj "/C=CN/ST=Beijing/L=Beijing/O=MyOrg/OU=Security/CN=Identity CA"

echo "✓ Identity CA 创建成功"
echo "  - ca_key.pem (CA私钥)"
echo "  - ca_cert.pem (CA证书)"

# ========================================
# 步骤 2: 创建 Permissions CA（权限证书颁发机构）
# ========================================
echo ""
echo "步骤 2: 创建 Permissions CA..."

# 生成 Permissions CA 私钥
openssl genrsa -out permissions_ca_key.pem 2048

# 生成 Permissions CA 自签名证书
openssl req -x509 -new -nodes -key permissions_ca_key.pem -sha256 -days 3650 \
  -out permissions_ca_cert.pem \
  -subj "/C=CN/ST=Beijing/L=Beijing/O=MyOrg/OU=Security/CN=Permissions CA"

echo "✓ Permissions CA 创建成功"
echo "  - permissions_ca_key.pem (Permissions CA私钥)"
echo "  - permissions_ca_cert.pem (Permissions CA证书)"

# ========================================
# 步骤 3: 为 Publisher 创建证书
# ========================================
echo ""
echo "步骤 3: 为 Publisher 创建证书..."

# 生成 Publisher 私钥
openssl genrsa -out pub_key.pem 2048

# 生成 Publisher 证书签名请求
openssl req -new -key pub_key.pem -out pub.csr \
  -subj "/C=CN/ST=Beijing/L=Beijing/O=MyOrg/OU=Application/CN=Publisher"

# 使用 Identity CA 签名 Publisher 证书
openssl x509 -req -in pub.csr -CA ca_cert.pem -CAkey ca_key.pem \
  -CAcreateserial -out  .pem -days 3650 -sha256

echo "✓ Publisher 证书创建成功"
echo "  - pub_key.pem (Publisher私钥)"
echo "  - pub.csr (Publisher证书签名请求)"
echo "  - pub_cert.pem (Publisher签名证书)"

# ========================================
# 步骤 4: 为 Subscriber 创建证书
# ========================================
echo ""
echo "步骤 4: 为 Subscriber 创建证书..."

# 生成 Subscriber 私钥
openssl genrsa -out sub_key.pem 2048

# 生成 Subscriber 证书签名请求
openssl req -new -key sub_key.pem -out sub.csr \
  -subj "/C=CN/ST=Beijing/L=Beijing/O=MyOrg/OU=Application/CN=Subscriber"

# 使用 Identity CA 签名 Subscriber 证书
openssl x509 -req -in sub.csr -CA ca_cert.pem -CAkey ca_key.pem \
  -CAcreateserial -out sub_cert.pem -days 3650 -sha256

echo "✓ Subscriber 证书创建成功"
echo "  - sub_key.pem (Subscriber私钥)"
echo "  - sub.csr (Subscriber证书签名请求)"
echo "  - sub_cert.pem (Subscriber签名证书)"

# ========================================
# 步骤 5: 验证证书
# ========================================
echo ""
echo "========================================"
echo "证书验证"
echo "========================================"

echo ""
echo "验证 CA 证书信息:"
openssl x509 -in ca_cert.pem -noout -subject -issuer -dates

echo ""
echo "验证 Publisher 证书信息:"
openssl x509 -in pub_cert.pem -noout -subject -issuer -dates

echo ""
echo "验证 Subscriber 证书信息:"
openssl x509 -in sub_cert.pem -noout -subject -issuer -dates

echo ""
echo "验证 Publisher 证书链:"
openssl verify -CAfile ca_cert.pem pub_cert.pem

echo ""
echo "验证 Subscriber 证书链:"
openssl verify -CAfile ca_cert.pem sub_cert.pem

# ========================================
# 步骤 6: 生成文件列表
# ========================================
echo ""
echo "========================================"
echo "生成的文件列表"
echo "========================================"
ls -lh *.pem *.csr *.srl 2>/dev/null

echo ""
echo "========================================"
echo "证书生成完成！"
echo "========================================"
echo ""
echo "生成的文件说明："
echo "  CA 相关:"
echo "    - ca_cert.pem            : Identity CA证书(根证书)"
echo "    - ca_key.pem             : Identity CA私钥"
echo "    - ca.srl                 : CA序列号文件"
echo "    - permissions_ca_cert.pem: Permissions CA证书"
echo "    - permissions_ca_key.pem : Permissions CA私钥"
echo ""
echo "  Publisher 相关:"
echo "    - pub_key.pem            : Publisher私钥"
echo "    - pub.csr                : Publisher证书签名请求"
echo "    - pub_cert.pem           : Publisher签名后的证书"
echo ""
echo "  Subscriber 相关:"
echo "    - sub_key.pem            : Subscriber私钥"
echo "    - sub.csr                : Subscriber证书签名请求"
echo "    - sub_cert.pem           : Subscriber签名后的证书"
echo ""
echo "安全提示："
echo "  ⚠️  请妥善保管所有 *_key.pem 文件（私钥）"
echo "  ⚠️  不要将私钥提交到版本控制系统"
echo "  ✓  可以安全分发 *_cert.pem 文件（公钥证书）"