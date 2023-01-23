#include <iostream>

int main() {
  int m, f, r;

  while (std::cin >> m >> f >> r) {
    if (m == -1 and f == -1 and r == -1) {
      break;
    }

    if (m == -1 or f == -1) {
      std::cout << "F" << std::endl;
      continue;
    }

    if ((m + f) >= 80) {
      std::cout << "A" << std::endl;
      continue;
    }

    if ((m + f) >= 65) {
      std::cout << "B" << std::endl;
      continue;
    }

    if ((m + f) >= 50) {
      std::cout << "C" << std::endl;
      continue;
    }

    if ((m + f) >= 30 and r >= 50) {
      std::cout << "C" << std::endl;
      continue;
    }
    
    if ((m + f) >= 30 ) {
      std::cout << "D" << std::endl;
      continue;
    }

    std::cout << "F" << std::endl;
  }
}
