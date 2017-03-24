#include "testlib.hpp"

#include "gtest/gtest.h"

class TestLibTest : public ::testing::Test {};

TEST(TestLibTest, TestAdd) {
  TestLib test_obj(10);
  ASSERT_NE(test_obj.Add(10), 10);
  ASSERT_EQ(test_obj.Add(10), 20);
}

int main(int argc, char **argv) {
    ::testing::InitGoogleTest(&argc, argv);
      return RUN_ALL_TESTS();
}
