#include <iostream>
#include <vector>

template< typename T >
std::vector< T > make_vector(std::size_t a, T b) {
  return std::vector< T >(a, b);
}

template< typename... Ts >
auto make_vector(std::size_t a, Ts... ts) {
  return std::vector< decltype(make_vector(ts...)) >
    (a, make_vector(ts...));
}

int main() {
  auto rooms = make_vector(4, 3, 10, 0);

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
