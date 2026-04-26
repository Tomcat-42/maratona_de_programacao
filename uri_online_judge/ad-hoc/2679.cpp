#include <iostream>

auto main() -> int {
  auto num = 0ull;
  std::cin >> num;
  std::cout << (num + (num % 2 == 0 ? 2 : 1)) << std::endl;
}
