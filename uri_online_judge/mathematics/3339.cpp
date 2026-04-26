#include <cmath>
#include <iostream>

auto main() -> int {
  auto n = 0ull;
  std::cin >> n;

  while (n-- > 0) {
    auto l = 0.0;
    auto r = 0.0;

    std::cin >> l >> r;

    std::cout << std::floor(std::sqrt(r)) - std::ceil(std::sqrt(l)) + 1
              << std::endl;
  }
}
