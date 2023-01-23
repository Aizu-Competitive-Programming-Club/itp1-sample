#include <iostream>

int main() {
  int a, b, c;
  std::cin >> a >> b >> c;

  if (a > b) {
    int temporary = a;
    a = b;
    b = temporary;
  }

  if (b > c) {
    int temporary = b;
    b = c;
    c = temporary;
  }

  if (a > b) {
    int temporary = a;
    a = b;
    b = temporary;
  }

  std::cout << a << " " << b << " " << c << std::endl;
}
