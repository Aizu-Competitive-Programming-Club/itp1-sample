#include <iostream>
#include <vector>

int main() {
  int n;
  std::cin >> n;

  std::vector< std::vector< int > > cards(4, std::vector< int >(14));
  std::vector< char > suit({'S', 'H', 'C', 'D'});
  for (int i = 0; i < n; i++) {
    char input_suit;
    int number;
    std::cin >> input_suit >> number;

    int suit_index = -1;
    for (int i = 0; i < (int)suit.size(); i++) {
      if (input_suit == suit[i]) {
        suit_index = i;
      }
    }

    cards[suit_index][number] = 1;
  }

  for (int i = 0; i < (int)suit.size(); i++) {
    for (int number = 1; number <= 13; number++) {
      if (cards[i][number]) {
        continue;
      }
      std::cout << suit[i] << " " << number << std::endl;
    }
  }
}
