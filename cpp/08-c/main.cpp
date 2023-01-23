#include <iostream>
#include <string>
#include <cctype>
#include <vector>

int main() {
  std::vector< int > count(26);

  char c;
  while (std::cin >> c) {
    if (not std::isalpha(c)) continue;

    c = std::tolower(c);
    count[c - 'a']++;
  }

  for (char i = 'a'; i <= 'z'; i++) {
    std::cout << i << " : " << count[i - 'a'] << std::endl;
  }
}
