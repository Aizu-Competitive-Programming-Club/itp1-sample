#include <iostream>
#include <vector>

int main() {
  int r, c;
  std::cin >> r >> c;

  std::vector< std::vector< int > > table(r + 1, std::vector< int >(c + 1));
  for (int i = 0; i < r; i++) {
    for (int j = 0; j < c; j++) {
      std::cin >> table[i][j];
      table[i][c] += table[i][j];
      table[r][j] += table[i][j];
      table[r][c] += table[i][j];
    }
  }

  for (int i = 0; i <= r; i++) {
    for (int j = 0; j <= c; j++) {
      if (j != 0) {
        std::cout << " ";
      }
      std::cout << table[i][j];
    }
    std::cout << std::endl;
  }
}
