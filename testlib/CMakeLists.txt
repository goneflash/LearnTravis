set(TARGET "testlib")

include_directories(
  ${CMAKE_CURRENT_SOURCE_DIR}/include
)

file(GLOB SOURCE_FILE
    "include/*.hpp"
    "src/*.cpp"
)

file(GLOB TEST_SOURCE_FILE
    "test/*.hpp"
    "test/*.cpp"
)

add_library(${TARGET} ${SOURCE_FILE})

# This for exposing the header files to code that uses this library.
target_include_directories(${TARGET} PUBLIC 
    ${CMAKE_CURRENT_SOURCE_DIR}/include 
)

if (USE_TEST)
  add_executable(${TARGET}_test ${TEST_SOURCE_FILE} ${SOURCE_FILE})
  target_link_libraries(${TARGET}_test ${TARGET} gtest gtest_main)

  add_test( TestLibTest ${TARGET}_test )
endif()
