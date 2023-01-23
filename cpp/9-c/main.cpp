#include <iostream>
#include <string>

int main() {
  int n;
  std::cin >> n;

  int taro = 0, hanako = 0;
  for (int i = 0; i < n; i++) {
    std::string t, h;
    std::cin >> t >> h;

    if (t == h) {
      taro += 1;
      hanako += 1;
    } else if (t > h) {
      taro += 3;
    } else {
      hanako += 3;
    }
  }

  std::cout << taro << " " << hanako << std::endl;
}

