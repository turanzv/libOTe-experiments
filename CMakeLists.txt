cmake_minimum_required(VERSION 3.20)
project(OTExperiments)

set(CMAKE_CXX_STANDARD 17)

# Create libOTe build directory
set(LIBOTE_BUILD_DIR ${CMAKE_BINARY_DIR}/libOTe-build)
file(MAKE_DIRECTORY ${LIBOTE_BUILD_DIR})
set(OC_THIRDPARTY_CLONE_DIR ${CMAKE_BINARY_DIR}/libOTe/out)
file(MAKE_DIRECTORY ${OC_THIRDPARTY_CLONE_DIR})

# Mirror libOTe build settings
set(ENABLE_ALL_OT ON CACHE BOOL "")
set(ENABLE_BOOST ON CACHE BOOL "")
set(FETCH_BOOST ON CACHE BOOL "")
set(ENABLE_SODIUM ON CACHE BOOL "")
set(FETCH_SODIUM ON CACHE BOOL "")
set(SUDO_FETCH OFF CACHE BOOL "")
set(FETCH_AUTO ON CACHE BOOL "")
set(PARALLEL_FETCH 8 CACHE STRING "")
set(ENABLE_COPROTO ON CACHE BOOL "")
set(FETCH_COPROTO ON CACHE BOOL "")

# Set output directories
set(CMAKE_RUNTIME_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/bin)

# Build libOTe in its own directory
add_subdirectory(${CMAKE_SOURCE_DIR}/libOTe ${LIBOTE_BUILD_DIR})

# Include directories
include_directories(${CMAKE_SOURCE_DIR}/libOTe)
include_directories(${CMAKE_SOURCE_DIR}/libOTe/cryptoTools)
include_directories(${CMAKE_SOURCE_DIR}/libOTe/thirdparty/coproto)

# # Set source directories
# set(EXAMPLES_DIR ${CMAKE_CURRENT_SOURCE_DIR}/examples)

# # Build sender and receiver
# add_executable(ot_sender ${EXAMPLES_DIR}/ot_sender.cpp)
# target_link_libraries(ot_sender libOTe cryptoTools)

# add_executable(ot_receiver ${EXAMPLES_DIR}/ot_receiver.cpp)
# target_link_libraries(ot_receiver libOTe cryptoTools)



