#include <iostream>
#include <string>

int main() {
  std::string s;

  while (std::cin >> s) {
    if (s == "0") {
      break;
    }

    int sum = 0;
    for (int i = 0; i < (int)s.size(); i++) {
      sum += s[i] - '0';
    }

    std::cout << sum << std::endl;
  }
}
