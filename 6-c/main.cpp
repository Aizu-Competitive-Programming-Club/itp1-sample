#include <iostream>
#include <vector>

int main() {
  std::vector< std::vector< std::vector< int > > > rooms(4, std::vector< std::vector< int > >(3, std::vector< int >(10)));

  int n;
  std::cin >> n;

  for (int i = 0; i < n; i++) {
    int b, f, r, v;
    std::cin >> b >> f >> r >> v;
    rooms[b - 1][f - 1][r - 1] += v;
  }

  for (int b = 0; b < 4; b++) {
    if (b != 0) {
      std::cout << "####################" << std::endl;
    }

    for (int f = 0; f < 3; f++) {
      for (int r = 0; r < 10; r++) {
        std::cout << " " << rooms[b][f][r];
      }
      std::cout << std::endl;
    }
  }
}
