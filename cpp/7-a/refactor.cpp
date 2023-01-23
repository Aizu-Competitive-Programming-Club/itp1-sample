#include <iostream>

char grade(int m, int f, int r) {
  if (m == -1 or f == -1 or (m + f) < 30) {
    return 'F';
  }

  if ((m + f) >= 80) {
    return 'A';
  }

  if ((m + f) >= 65) {
    return 'B';
  }

  if ((m + f) >= 50 or ((m + f) >= 30 and r >= 50)) {
    return 'C';
  }

  return 'D';
}

int main() {
  int m, f, r;

  while (std::cin >> m >> f >> r) {
    if (m == -1 and f == -1 and r == -1) {
      break;
    }

    std::cout << grade(m, f, r) << std::endl;
  }
}
