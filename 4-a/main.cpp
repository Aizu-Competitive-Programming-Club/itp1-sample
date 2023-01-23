#include <iostream>
#include <iomanip>

int main() {
  int a, b;
  std::cin >> a >> b;

  std::cout << a / b << " " << a % b << " ";
  std::cout << std::fixed << std::setprecision(5) << static_cast<double>(a) / b << std::endl;
}
