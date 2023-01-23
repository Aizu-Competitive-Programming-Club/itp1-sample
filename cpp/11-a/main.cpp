#include <iostream>
#include <string>
#include <algorithm>
#include <vector>

class Dice {
  std::vector< int > as;

  void rotate_inner(std::vector< int > is) {
    for (int i = 1; i < (int)is.size(); i++) {
      std::swap(as[is[i - 1]], as[is[i]]);
    }
  }

 public:
  Dice() {}
  Dice(std::vector< int > as_) : as(as_) {}

  int top() {
    return as[0];
  }

  void rotate(char c) {
    if (c == 'N') {
      rotate_inner({0, 1, 5, 4});
    }
    if (c == 'S') {
      rotate_inner({0, 4, 5, 1});
    }
    if (c == 'E') {
      rotate_inner({0, 3, 5, 2});
    }
    if (c == 'W') {
      rotate_inner({0, 2, 5, 3});
    }
  }
};

int main() {
  std::vector< int > as(6);
  for (int i = 0; i < (int)as.size(); i++) {
    std::cin >> as[i];
  }

  Dice dice(as);
  char c;
  while (std::cin >> c) {
    dice.rotate(c);
  }

  std::cout << dice.top() << std::endl;
}
