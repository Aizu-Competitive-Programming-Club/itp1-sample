#include <iostream>
#include <iomanip>
#include <numeric>
#include <vector>
#include <cmath>

int main() {
  int n;
  
  while (std::cin >> n) {
    if (n == 0) {
      break;
    }

    std::vector< double > s(n);
    for (int i = 0; i < n; i++) {
      std::cin >> s[i];
    }

    double m = std::accumulate(s.begin(), s.end(), 0.0) / n;
    double alpha = 0.0;
    for (int i = 0; i < n; i++) {
      alpha += std::pow(s[i] - m, 2);
    }
    alpha = std::sqrt(alpha / n);

    std::cout << std::fixed << std::setprecision(4);
    std::cout << alpha << std::endl;
  }
}

