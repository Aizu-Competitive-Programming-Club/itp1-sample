#include <iostream>

int main() {
  int n;
  std::cin >> n;

  for (int i = 1; i <= n; i++) {
    int x = i;

    if (x % 3 == 0) {
      std::cout << " " << i;
      continue;
    }

    while (x) {
      if (x % 10 == 3) {
        std::cout << " " << i;
        break;
      }

      x /= 10;
    }
  }

  std::cout << std::endl;
}
