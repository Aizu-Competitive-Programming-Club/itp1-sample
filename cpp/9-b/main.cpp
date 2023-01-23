#include <iostream>
#include <string>

int main() {
  std::string s;
  while (std::cin >> s) {
    if (s == "-") {
      break;
    }

    int m;
    std::cin >> m;

    for (int i = 0; i < m; i++) {
      int h;
      std::cin >> h;

      s = s.substr(h, s.size()) + s.substr(0, h);
    }

    std::cout << s << std::endl;
  }
}
