#include <iostream>
#include <string>

int main() {
  std::string s;
  std::cin >> s;
  s += s;

  std::string p;
  std::cin >> p;
  for (int offset = 0; offset < (int)s.size(); offset++) {
    if (s.substr(offset, p.size()) == p) {
      std::cout << "Yes" << std::endl;
      return 0;
    }
  }

  std::cout << "No" << std::endl;
}

