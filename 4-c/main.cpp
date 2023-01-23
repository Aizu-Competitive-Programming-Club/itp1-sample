#include <iostream>

int main() {
  int a, b;
  char op;

  while (std::cin >> a >> op >> b) {
    if (op == '?') {
      break;
    }

    if (op == '+') {
      std::cout << a + b << std::endl;
    }
    if (op == '-') {
      std::cout << a - b << std::endl;
    }
    if (op == '*') {
      std::cout << a * b << std::endl;
    }
    if (op == '/') {
      std::cout << a / b << std::endl;
    }
  }
}
