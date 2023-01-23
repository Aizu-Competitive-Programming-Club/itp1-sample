#include <iostream>
#include <string>
#include <cctype>

int main() {
  std::string w;
  std::cin >> w;

  for (int i = 0; i < (int)w.size(); i++) {
    w[i] = std::tolower(w[i]);
  }

  std::string t;
  int answer = 0;
  while (std::cin >> t) {
    if (t == "END_OF_TEXT") {
      break;
    }

    for (int i = 0; i < (int)t.size(); i++) {
      t[i] = std::tolower(t[i]);
    }

    if (w == t) {
      answer++;
    }
  }

  std::cout << answer << std::endl;
}
