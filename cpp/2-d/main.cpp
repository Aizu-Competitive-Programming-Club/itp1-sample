#include <iostream>

int main() {
  int W, H, x, y, r;
  std::cin >> W >> H >> x >> y >> r;

  if (0 + r <= x and x + r <= W and 0 + r <= y and y + r <= H) {
    std::cout << "Yes" << std::endl;
  } else {
    std::cout << "No" << std::endl;
  }
}
