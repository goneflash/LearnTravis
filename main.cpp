#include <iostream>
#include <string>
#include <memory>
#include <unordered_map>

int main() {
  std::cout << "Testing C++11 functionality.\n";

  std::unordered_map<std::string, std::string> values = {
    { "Hello", "World" } 
  };
  for (auto const& it : values) {
    std::cout << it.first << " " << it.second << std::endl;
  }

  return 0;
}
