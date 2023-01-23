#include <iostream>

int main() {
  int n;
  std::cin >> n;

  constexpr int MIN_A = -1000000;
  constexpr int MAX_A = +1000000;

  int min = MAX_A;
  int max = MIN_A;
  long long sum = 0;
  for (int i = 0; i < n; i++) {
    int a;
    std::cin >> a;

    if (min > a) {
      min = a;
    }

    if (max < a) {
      max = a;
    }

    sum += a;
  }

  std::cout << min << " " << max << " " << sum << std::endl;
}

