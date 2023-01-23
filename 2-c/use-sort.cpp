#include <iostream>
#include <vector>
#include <algorithm>

int main() {
  std::vector< int > as(3);
  for (int &a: as) std::cin >> a;

  std::sort(as.begin(), as.end());

  std::cout << as[0] << " " << as[1] << " " << as[2] << std::endl;
}
