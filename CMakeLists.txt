cmake_minimum_required(VERSION 3.0)

find_package(Protobuf REQUIRED)
include_directories(${PROTOBUF_INCLUDE_DIRS})
include_directories(${CMAKE_CURRENT_BINARY_DIR})
protobuf_generate_cpp(PROTO_SRCS PROTO_HDRS addressbook.proto)

# add_executable(bar bar.cc ${PROTO_SRCS} ${PROTO_HDRS})
# target_link_libraries(bar ${PROTOBUF_LIBRARIES})

set(QualityBeta_SOURCES
    src/main.cpp
)
add_executable(QualityBeta ${QualityBeta_SOURCES} ${PROTO_SRCS} ${PROTO_HDRS})
target_link_libraries(QualityBeta ${PROTOBUF_LIBRARIES})
