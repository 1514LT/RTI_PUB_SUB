cmake_minimum_required(VERSION 3.10)
project(RPC_DDS)

# 设置C++标准
set(CMAKE_CXX_STANDARD 14)
set(CMAKE_CXX_STANDARD_REQUIRED ON)
set(CMAKE_EXPORT_COMPILE_COMMANDS ON)

# 编译选项
set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -Wall -Wno-deprecated-declarations -Wno-narrowing -Wno-unused-but-set-variable -Wno-unused-variable")
set(CMAKE_EXE_LINKER_FLAGS "${CMAKE_EXE_LINKER_FLAGS} -no-pie -rdynamic")


# 包含目录
include_directories(
    ${CMAKE_CURRENT_SOURCE_DIR}
    ${CMAKE_CURRENT_SOURCE_DIR}/type
    ${CMAKE_CURRENT_SOURCE_DIR}/thirdparty/include
    ${CMAKE_CURRENT_SOURCE_DIR}/thirdparty/include/ndds
    ${CMAKE_CURRENT_SOURCE_DIR}/thirdparty/include/ndds/hpp
)
add_compile_options(-Wno-class-memaccess)
# 预处理定义
add_definitions(-DRTI_UNIX -DRTI_LINUX -DRTI_64BIT)
add_definitions(-DCMAKE_BUILD_TYPE=Debug)
# 库目录
link_directories(${CMAKE_CURRENT_SOURCE_DIR}/thirdparty/lib/x64Linux3gcc4.8.2)

# 通用源文件
set(COMMON_SOURCES
    # 统一类型文件（所有接口共享）
    ${CMAKE_CURRENT_SOURCE_DIR}/type/Base.cxx
    ${CMAKE_CURRENT_SOURCE_DIR}/type/BasePlugin.cxx
    ${CMAKE_CURRENT_SOURCE_DIR}/type/BaseSupport.cxx
)

# 通用对象库
add_library(function_types SHARED ${COMMON_SOURCES})

add_executable(sub sub.cxx)
target_link_libraries(sub 
    function_types
    nddscpp
    nddsc
    nddscore
    nddstransporttcp
    rticonnextmsgcpp
    m 
    pthread
    rt
    dl
)
add_executable(pub pub.cxx)
target_link_libraries(pub 
    function_types
    nddscpp
    nddsc
    nddscore
    nddstransporttcp
    rticonnextmsgcpp
    m 
    pthread
    rt
    dl
)

target_link_options(sub PRIVATE "-Wl,--no-as-needed")
target_link_options(pub PRIVATE "-Wl,--no-as-needed")