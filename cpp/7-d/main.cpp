#include <iostream>
#include <vector>

int main() {
  int n, m, l;
  std::cin >> n >> m >> l;

  std::vector< std::vector< int > > A(n, std::vector< int >(m)), B(m, std::vector< int >(l));
  for (int i = 0; i < n; i++) {
    for (int k = 0; k < m; k++) {
      std::cin >> A[i][k];
    }
  }
  for (int k = 0; k < m; k++) {
    for (int j = 0; j < l; j++) {
      std::cin >> B[k][j];
    }
  }

  for (int i = 0; i < n; i++) {
    for (int j = 0; j < l; j++) {
      long long c = 0;
      for (int k = 0; k < m; k++) {
        c += A[i][k] * B[k][j];
      }

      if (j != 0) {
        std::cout << " ";
      }
      std::cout << c;
    }
    std::cout << std::endl;
  }
}
