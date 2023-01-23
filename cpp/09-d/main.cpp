#include <iostream>
#include <string>
#include <algorithm>

int main() {
  std::string s;
  std::cin >> s;

  int q;
  std::cin >> q;

  for (int i = 0; i < q; i++) {
    std::string query_type;
    std::cin >> query_type;

    if (query_type == "print") {
      int a, b;
      std::cin >> a >> b;
      std::cout << s.substr(a, b - a + 1) << std::endl;
    }

    if (query_type == "reverse") {
      int a, b;
      std::cin >> a >> b;
      std::reverse(s.begin() + a, s.begin() + b + 1);
    }

    if (query_type == "replace") {
      int a, b;
      std::string p;
      std::cin >> a >> b >> p;
      std::copy(p.begin(), p.end(), s.begin() + a);
    }
  }
}

