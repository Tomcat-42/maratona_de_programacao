#include <algorithm>
#include <iostream>
#include <vector>

auto main() -> int {
  std::vector<std::size_t> nums;
  std::size_t n;
  std::cin >> n;

  while (n--) {
    size_t x;
    std::cin >> x;
    nums.push_back(x);
  }

  std::sort(nums.begin(), nums.end(), [](std::size_t a, std::size_t b) {
    auto a_parity = a % 2 == 0;
    auto b_parity = b % 2 == 0;

    if (a_parity && !b_parity) return true;
    if (!a_parity && b_parity) return false;
    if (a_parity && b_parity) return a < b;
    if (!a_parity && !b_parity) return a > b;
    __builtin_unreachable();
  });

  for (const auto& num : nums) std::cout << num << std::endl;
}
