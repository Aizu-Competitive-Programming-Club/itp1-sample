#include <iostream>
#include <iomanip>
#include <cmath>

int main() {
  double x1, y1, x2, y2;
  std::cin >> x1 >> y1 >> x2 >> y2;

  std::cout << std::fixed << std::setprecision(4);
  std::cout << std::sqrt(std::pow(x1 - x2, 2) + std::pow(y1 - y2, 2)) << std::endl;
}
