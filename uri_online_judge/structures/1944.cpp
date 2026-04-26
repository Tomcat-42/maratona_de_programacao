#include <iostream>
#include <vector>

auto main() -> int {
  std::vector<char> panel = {'F', 'A', 'C', 'E'};
  std::size_t n;
  std::size_t wins = 0;

  std::cin >> n;
  while (n--) {
    char a[4];
    std::cin >> a[0] >> a[1] >> a[2] >> a[3];

    auto l = panel.size();
    if (a[0] == panel[l - 1] && a[1] == panel[l - 2] && a[2] == panel[l - 3] &&
        a[3] == panel[l - 4]) {
      wins++;
      panel.erase(panel.end() - 4, panel.end());
      if (panel.empty())
        panel = {'F', 'A', 'C', 'E'};
    } else {
      panel.push_back(a[0]);
      panel.push_back(a[1]);
      panel.push_back(a[2]);
      panel.push_back(a[3]);
    }
  }

  std::cout << wins << std::endl;
}
