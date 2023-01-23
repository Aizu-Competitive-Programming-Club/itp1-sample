#include <iostream>

int main() {
  int x;
  int case_count = 0;

  while (std::cin >> x, x) {
    case_count++;

    std::cout << "Case " << case_count << ": " << x << std::endl;
  }
}
