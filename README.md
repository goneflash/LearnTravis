LearnTravis [![Build Status](https://travis-ci.org/goneflash/LearnTravis.svg?branch=master)](https://travis-ci.org/goneflash/LearnTravis)

Step 0

Use g++ compile c++11 program.

Step 1

Use CMake to config c++11 program.

Step 2

Add opencv and eigen.

Step 3

Add gtest framework using MACRO.
Enable test:
mkdir build && cd build && cmake .. -DUSE_TEST=ON && make


TODO:
1) How to cache system status to avoid slow testing, e.g. install everything for
every test.
