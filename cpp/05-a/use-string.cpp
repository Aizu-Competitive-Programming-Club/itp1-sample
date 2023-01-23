#include <iostream>
#include <string>

int main() {
  int h, w;
  
  while (std::cin >> h >> w) {
    if (h == 0 and w == 0) {
      break;
    }

    for (int i = 0; i < h; i++) {
      std::cout << std::string(w, '#') << std::endl;
    }
    std::cout << std::endl;
  }
}
