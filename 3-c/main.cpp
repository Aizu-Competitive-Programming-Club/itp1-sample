#include <iostream>

int main() {
  int x, y;

  while (std::cin >> x >> y) {
    if (x == 0 and y == 0) {
      break;
    }

    if (x > y) {
      int temporary = x;
      x = y;
      y = temporary;
    }

    std::cout << x << " " << y << std::endl;
  }
}

