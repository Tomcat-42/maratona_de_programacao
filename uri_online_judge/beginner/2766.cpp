#include <algorithm>
#include <iostream>
#include <ranges>
#include <string>

auto main() -> int {
  std::ranges::copy(std::ranges::istream_view<std::string>(std::cin) |
                        std::views::filter([i = 0](const auto &line) mutable {
                          return ++i == 3 || i == 7 || i == 9;
                        }),
                    std::ostream_iterator<std::string>(std::cout, "\n"));
}
