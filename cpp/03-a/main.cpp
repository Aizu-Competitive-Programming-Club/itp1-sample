#include <iostream>

int main() {
  for ([[maybe_unused]] int i = 0; i < 1000; i++) {
    std::cout << "Hello World" << std::endl;
  }
}
