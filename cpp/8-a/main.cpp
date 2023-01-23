#include <iostream>
#include <string>
#include <cctype>

int main() {
  std::string s;

  std::getline(std::cin, s);

  for (int i = 0; i < (int)s.size(); i++) {
    if (std::islower(s[i])) {
      s[i] = std::toupper(s[i]);
      continue;
    }
    if (std::isupper(s[i])) {
      s[i] = std::tolower(s[i]);
      continue;
    }
  }

  std::cout << s << std::endl;
}
