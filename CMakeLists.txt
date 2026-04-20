cmake_minimum_required(VERSION 3.10)
project(DateTypes_DDS)

# 设置C++标准
set(CMAKE_CXX_STANDARD 14)
set(CMAKE_CXX_STANDARD_REQUIRED ON)
set(CMAKE_EXPORT_COMPILE_COMMANDS ON)

# 编译选项
set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -m64 -Wall -std=c++11 -Wno-deprecated-declarations")
set(CMAKE_EXE_LINKER_FLAGS "${CMAKE_EXE_LINKER_FLAGS} -m64 -no-pie -rdynamic")


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
add_definitions(-DDISCOVER)
# 库目录
link_directories(${CMAKE_CURRENT_SOURCE_DIR}/thirdparty/lib/x64Linux3gcc4.8.2)

# 通用源文件
set(COMMON_SOURCES
    ${CMAKE_CURRENT_SOURCE_DIR}/type/DataTypes.cxx
    ${CMAKE_CURRENT_SOURCE_DIR}/type/DataTypesImpl.cxx
    ${CMAKE_CURRENT_SOURCE_DIR}/type/DataTypesImplPlugin.cxx
    ${CMAKE_CURRENT_SOURCE_DIR}/application.cxx
    ${CMAKE_CURRENT_SOURCE_DIR}/Publisher.cxx
    ${CMAKE_CURRENT_SOURCE_DIR}/Subscriber.cxx
    ${CMAKE_CURRENT_SOURCE_DIR}/MultiDomainNode.cxx
)

# 通用对象库
add_library(DateTypes_common SHARED ${COMMON_SOURCES})

add_executable(NodeA NodeA.cxx)
target_link_libraries(NodeA 
    DateTypes_common
    nddstransporttcp
    nddscpp2
    nddsc
    nddscore
    m 
    pthread
    rt
    dl
)

add_executable(sub MainSub.cxx)
target_link_libraries(sub 
    DateTypes_common
    nddstransporttcp
    nddscpp2
    nddsc
    nddscore
    m 
    pthread 
    rt 
    dl
)

add_executable(pub MainPub.cxx)
target_link_libraries(pub 
    DateTypes_common
    nddstransporttcp
    nddscpp2
    nddsc
    nddscore
    m 
    pthread 
    rt 
    dl
)

add_executable(Discover DiscoveryServer.cxx)
target_link_libraries(Discover 
    DateTypes_common
    nddstransporttcp
    nddscpp2
    nddsc
    nddscore
    m 
    pthread 
    rt 
    dl
)

target_link_options(NodeA PRIVATE "-Wl,--no-as-needed")
target_link_options(pub PRIVATE "-Wl,--no-as-needed")
target_link_options(sub PRIVATE "-Wl,--no-as-needed")
target_link_options(Discover PRIVATE "-Wl,--no-as-needed")
