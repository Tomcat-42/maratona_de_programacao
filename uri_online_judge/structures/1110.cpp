#include <iostream>
#include <vector>

auto main() -> int {
  int n;
  while (std::cin >> n) {
    if (n == 0) break;
    std::vector<int> cards;
    do {
      cards.push_back(n--);
    } while (n > 0);

    std::vector<int> discarded;
    do {
      discarded.push_back(cards.back());
      cards.pop_back();
      cards.insert(cards.begin(), cards.back());
      cards.pop_back();
    } while (cards.size() >= 2);

    std::cout << "Discarded cards:";
    for (auto i = 0ull; i < discarded.size(); ++i)
      std::cout << (i == 0 ? " " : ", ") << discarded[i];
    std::cout << "\nRemaining card: " << cards.front() << "\n";
  }
}
