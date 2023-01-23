#include <iostream>

int main() {
  int a, b, c;
  std::cin >> a >> b >> c;

  int answer = 0;
  for (int n = a; n <= b; n++) {
    if (c % n != 0) {
      continue;
    }

    answer++;
  }

  std::cout << answer << std::endl;
}
