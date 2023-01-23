#include <iostream>
#include <vector>

int main() {
  int n;
  std::cin >> n;

  std::vector< int > ss(14), hs(14), cs(14), ds(14);
  for (int i = 0; i < n; i++) {
    char suit;
    int number;
    std::cin >> suit >> number;

    if (suit == 'S') {
      ss[number] = 1;
    }
    if (suit == 'H') {
      hs[number] = 1;
    }
    if (suit == 'C') {
      cs[number] = 1;
    }
    if (suit == 'D') {
      ds[number] = 1;
    }
  }

  for (int i = 1; i <= 13; i++) {
    if (ss[i]) {
      continue;
    }
    std::cout << "S " << i << std::endl;
  }

  for (int i = 1; i <= 13; i++) {
    if (hs[i]) {
      continue;
    }
    std::cout << "H " << i << std::endl;
  }

  for (int i = 1; i <= 13; i++) {
    if (cs[i]) {
      continue;
    }
    std::cout << "C " << i << std::endl;
  }

  for (int i = 1; i <= 13; i++) {
    if (ds[i]) {
      continue;
    }
    std::cout << "D " << i << std::endl;
  }
}
