#include <iostream>

int main() {
  int x;
  int case_count = 0;

  while (std::cin >> x) {
    if (x == 0) {
      break;
    }

    case_count++;

    std::cout << "Case " << case_count << ": " << x << std::endl;
  }
}
