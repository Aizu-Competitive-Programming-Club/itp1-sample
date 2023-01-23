#include <iostream>
#include <iomanip>
#include <cmath>

int main() {
  double a, b, C;
  std::cin >> a >> b >> C;

  double theta = C / 180 * M_PI;

  double S = a * b * std::sin(theta) / 2;
  double L = a + b + std::sqrt(std::pow(a, 2) + std::pow(b, 2) - 2 * a * b * std::cos(theta));
  double h = std::sin(theta) * b;

  std::cout << std::fixed << std::setprecision(4);
  std::cout << S << std::endl;
  std::cout << L << std::endl;
  std::cout << h << std::endl;
}
