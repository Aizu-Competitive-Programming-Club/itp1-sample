#include <iostream>
#include <vector>

int main() {
  int n, m;
  std::cin >> n >> m;

  std::vector< std::vector< int > > A(n, std::vector< int >(m));
  for (int i = 0; i < n; i++) {
    for (int j = 0; j < m; j++) {
      std::cin >> A[i][j];
    }
  }

  std::vector< int > b(m);
  for (int i = 0; i < m; i++) {
    std::cin >> b[i];
  }

  for (int i = 0; i < n; i++) {
    int c = 0;
    for (int j = 0; j < m; j++) {
      c += A[i][j] * b[j];
    }
    std::cout << c << std::endl;
  }
}
