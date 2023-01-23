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

  int front() {
    return as[1];
  }

  int right() {
    return as[2];
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
    if (c == 'R') {
      rotate_inner({1, 3, 4, 2});
    }
    if (c == 'L') {
      rotate_inner({1, 2, 4, 3});
    }
  }

  void normalize(int Top, int Front) {
    for (int i = 0; i < 6; i++) {
      if (top() == Top) {
        break;
      }

      if (i % 2 == 0) rotate('N');
      else rotate('E');
    }

    for (int i = 0; i < 6; i++) {
      if (front() == Front) {
        break;
      }
      rotate('R');
    }
  }

  std::vector< int > get_as_vector() const {
    return as;
  }
};

int main() {
  std::vector< int > as(6), bs(6);
  for (int i = 0; i < (int)as.size(); i++) {
    std::cin >> as[i];
  }
  for (int i = 0; i < (int)bs.size(); i++) {
    std::cin >> bs[i];
  }

  Dice dice1(as), dice2(bs);
  for (int i = 0; i < 6; i++) {
    for (int j = 0; j < 4; j++) {
      dice2.rotate('R');
      if (dice1.get_as_vector() == dice2.get_as_vector()) {
        std::cout << "Yes" << std::endl;
        return 0;
      }
    }

    if (i % 2 == 0) dice2.rotate('N');
    else dice2.rotate('E');
  }

  std::cout << "No" << std::endl;
}
