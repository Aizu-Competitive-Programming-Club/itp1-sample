#include <iostream>
#include <iomanip>
#include <cmath>
#include <vector>
#include <algorithm>

int main() {
  int n;
  std::cin >> n;

  std::vector< int > xs(n), ys(n);
  for (int i = 0; i < n; i++) {
    std::cin >> xs[i];
  }
  for (int i = 0; i < n; i++) {
    std::cin >> ys[i];
  }

  std::cout << std::fixed << std::setprecision(5);

  { // p = 1
    double d = 0;
    for (int i = 0; i < n; i++) {
      d += std::abs(xs[i] - ys[i]);
    }

    std::cout << d << std::endl;
  }

  { // p = 2
    double d = 0;
    for (int i = 0; i < n; i++) {
      d += std::pow(xs[i] - ys[i], 2);
    }
    d = std::sqrt(d);

    std::cout << d << std::endl;
  }

  { // p = 3
    double d = 0;
    for (int i = 0; i < n; i++) {
      d += std::pow(std::abs(xs[i] - ys[i]), 3);
    }
    d = std::cbrt(d);

    std::cout << d << std::endl;
  }

  { // p = infty
    double d = 0;
    for (int i = 0; i < n; i++) {
      d = std::max(d, (double)std::abs(xs[i] - ys[i]));
    }

    std::cout << d << std::endl;
  }
}
