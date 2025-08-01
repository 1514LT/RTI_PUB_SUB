cmake_minimum_required(VERSION 3.10)
project(DateTypes_DDS)

# 设置C++标准
set(CMAKE_CXX_STANDARD 14)
set(CMAKE_CXX_STANDARD_REQUIRED ON)


# 编译选项
set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -m64 -Wall -std=c++11")
set(CMAKE_EXE_LINKER_FLAGS "${CMAKE_EXE_LINKER_FLAGS} -m64 -no-pie -rdynamic")


# 包含目录
include_directories(
    ${CMAKE_CURRENT_SOURCE_DIR}
    ${CMAKE_CURRENT_SOURCE_DIR}/type
    ${CMAKE_CURRENT_SOURCE_DIR}/thirdparty/include
    ${CMAKE_CURRENT_SOURCE_DIR}/thirdparty/include/ndds
    ${CMAKE_CURRENT_SOURCE_DIR}/thirdparty/include/ndds/hpp
)

# 预处理定义
add_definitions(-DRTI_UNIX -DRTI_LINUX -DRTI_64BIT)

# 库目录
link_directories(${CMAKE_CURRENT_SOURCE_DIR}/thirdparty/lib)

# 通用源文件
set(COMMON_SOURCES
    ${CMAKE_CURRENT_SOURCE_DIR}/type/DateTypes.cxx
    ${CMAKE_CURRENT_SOURCE_DIR}/type/DateTypesPlugin.cxx
)

# 通用对象库
add_library(DateTypes_common SHARED ${COMMON_SOURCES})

# Publisher可执行文件
add_executable(pub MainPub.cxx Publisher.cxx)
target_link_libraries(pub 
    DateTypes_common
    nddscpp2
    nddsc
    nddscore
    dl m pthread rt
)

# Subscriber可执行文件（使用WaitSet）
add_executable(sub MainSub.cxx Subscriber.cxx)
target_link_libraries(sub 
    DateTypes_common
    nddscpp2
    nddsc
    nddscore
    dl m pthread rt
)
