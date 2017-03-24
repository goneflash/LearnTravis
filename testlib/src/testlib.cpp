#include "testlib.hpp"

TestLib::TestLib(int a) : a_(a) {}

int TestLib::Add(int a) {
  return a + a_;
}
