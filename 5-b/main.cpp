#include <iostream>

int main() {
  int h, w;

  while (std::cin >> h >> w) {
    if (h == 0 and w == 0) {
      break;
    }

    for (int j = 0; j < w; j++) {
      std::cout << '#';
    }
    std::cout << std::endl;

    for (int i = 1; i + 1 < h; i++) {
      std::cout << '#';
      for (int j = 1; j + 1 < w; j++) {
        std::cout << '.';
      }
      std::cout << '#' << std::endl;
    }

    for (int j = 0; j < w; j++) {
      std::cout << '#';
    }
    std::cout << std::endl;

    std::cout << std::endl;
  }
}


  
