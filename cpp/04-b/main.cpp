#include <iostream>
#include <iomanip>
#include <cmath>

int main() {
  double r;
  std::cin >> r;

  std::cout << std::fixed << std::setprecision(5);
  std::cout << r * r * M_PI << " " << 2 * r * M_PI << std::endl;
}

