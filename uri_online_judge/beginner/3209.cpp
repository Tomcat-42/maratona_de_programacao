#include <iostream>
#include <vector>

auto main() -> int {
  auto n = 0ull;
  std::cin >> n;

  while (n-- > 0) {
    auto k = 0ull;
    std::cin >> k;

    std::vector<unsigned long long> v(k);
    while (k--)
      std::cin >> v[k];

    auto sum = 1ull;
    for (auto t : v)
      sum += (t - 1);
  }
}
