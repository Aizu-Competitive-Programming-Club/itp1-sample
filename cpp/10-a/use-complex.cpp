#include <iostream>
#include <iomanip>
#include <complex>

int main() {
  double x1, y1, x2, y2;
  std::cin >> x1 >> y1 >> x2 >> y2;

  std::complex< double > p1(x1, y1), p2(x2, y2);

  std::cout << std::fixed << std::setprecision(4);
  std::cout << std::abs(p1 - p2) << std::endl;
}
