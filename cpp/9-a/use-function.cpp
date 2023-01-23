#include <iostream>
#include <string>
#include <cctype>

std::string normalize(std::string s) {
  for (char &c: s) {
    c = std::tolower(c);
  }
  return s;
}

int main() {
  std::string w;
  std::cin >> w;

  w = normalize(w);

  std::string t;
  int answer = 0;
  while (std::cin >> t) {
    if (t == "END_OF_TEXT") {
      break;
    }

    if (w == normalize(t)) {
      answer++;
    }
  }

  std::cout << answer << std::endl;
}
