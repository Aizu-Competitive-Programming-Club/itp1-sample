#include <iostream>

int main() {
  int n, x;

  while (std::cin >> n >> x) {
    if (n == 0 and x == 0) {
      break;
    }

    int answer = 0;
    for (int a = 1; a <= n; a++) {
      for (int b = a + 1; b <= n; b++) {
        for (int c = b + 1; c <= n; c++) {
          if (a + b + c != x) continue;
          answer++;
        }
      }
    }

    std::cout << answer << std::endl;
  }
}
