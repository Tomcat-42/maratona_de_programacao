#include <algorithm>
#include <cstddef>
#include <iostream>
#include <string>
#include <string_view>
#include <vector>

auto main(int argc, char **argv) -> int {
  auto longest_common_subsequence = [](std::string_view s1,
                                       std::string_view s2) -> size_t {
    auto prev = std::vector<size_t>(s2.size() + 1, 0);
    auto current = std::vector<size_t>(s2.size() + 1, 0);

    for (size_t i = 1; i <= s1.size(); ++i) {
      for (size_t j = 1; j <= s2.size(); ++j) {
        if (s1[i - 1] == s2[j - 1]) {
          current[j] = prev[j - 1] + 1;
        } else {
          current[j] = std::max(prev[j], current[j - 1]);
        }
      }
      std::swap(prev, current);
    }

    return prev[s2.size()];
  };

  while (true) {
    std::string s1, s2;
    std::cin >> s1 >> s2;
    if (std::cin.eof()) {
      break;
    }
    std::cout << longest_common_subsequence(s1, s2) << std::endl;
  }
}
