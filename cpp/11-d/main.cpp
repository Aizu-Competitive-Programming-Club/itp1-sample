#include <iostream>
#include <string>
#include <algorithm>
#include <vector>
#include <set>

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

  void fix_top_and_front(int Top, int Front) {
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
  
  void normalize() {
    std::vector< int > min_as = as;

    for (int i = 0; i < 6; i++) {
      for (int j = 0; j < 4; j++) {
        rotate('R');
        min_as = std::min(min_as, as);
      }

      if (i % 2 == 0) rotate('N');
      else rotate('E');
    }

    as = min_as;
  }

  std::vector< int > get_as_vector() const {
    return as;
  }
};

int main() {
  int n;
  std::cin >> n;

  std::set< std::vector< int > > st;
  for (int i = 0; i < n; i++) {
    std::vector< int > as(6);
    for (int i = 0; i < (int)as.size(); i++) {
      std::cin >> as[i];
    }

    Dice dice(as);
    dice.normalize();

    if (st.count(dice.get_as_vector())) {
      std::cout << "No" << std::endl;
      return 0;
    }

    st.insert(dice.get_as_vector());
  }

  std::cout << "Yes" << std::endl;
}
