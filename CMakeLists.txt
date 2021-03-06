cmake_minimum_required(VERSION 2.8.12)

project(LearnTravis)

include(CheckCXXCompilerFlag)
CHECK_CXX_COMPILER_FLAG("-std=c++11" COMPILER_SUPPORTS_CXX11)
if(COMPILER_SUPPORTS_CXX11)
  set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -std=c++11")
else() 
  message(STATUS "The compiler ${CMAKE_CXX_COMPILER} has no C++11 support. Please use a different C++ compiler.")
endif()

# cmake -DTEST=ON to enable the tests.
option(USE_TEST "Build tests." OFF)

find_package( Ceres REQUIRED )
find_package( OpenCV REQUIRED )
find_package( Eigen3 REQUIRED )

message(STATUS "OpenCV library status:")
message(STATUS "    version: ${OpenCV_VERSION}")
message(STATUS "    libraries: ${OpenCV_LIBS}")
message(STATUS "    include path: ${OpenCV_INCLUDE_DIRS}")
message(STATUS "Eigen library status:")
message(STATUS "    include path: ${EIGEN3_INCLUDE_DIR}")

add_subdirectory(testlib)

add_executable(main main.cpp)
target_link_libraries(main testlib)

if (USE_TEST)
  enable_testing()
  include_directories(thirdparty/googletest/googletest/include)
  add_subdirectory(thirdparty/googletest/googletest)
endif()
