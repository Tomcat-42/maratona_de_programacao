#include <iostream>
#include <queue>
#include <vector>

constexpr auto MAX_WEIGHT = 50ull;

// first = qnt, second = peso
using toys = std::pair<std::size_t, std::size_t>;

auto operator>>(std::istream &is, toys &b) -> std::istream & {
  return (is >> b.first >> b.second);
}

auto main() -> int {
  const auto cmp = [](const toys &b1, const toys &b2) {
    return (b1.first == b2.first) ? (b1.second > b2.second)
                                  : (b1.first < b2.first);
  };

  auto n = 0ull;
  std::cin >> n;

  while (n-- > 0) {
    auto pac = 0ull;
    std::cin >> pac;

    std::priority_queue<toys, std::vector<toys>, decltype(cmp)> toys_queue(cmp);
    std::priority_queue<toys, std::vector<toys>, decltype(cmp)>
        discarted_toys_queue(cmp);

    for (auto i = 0ull; i < pac; ++i) {
      toys b;
      std::cin >> b;
      toys_queue.push(b);
    }

    // print all the queue
    // while (!toys_queue.empty()) {
    //   toys q = toys_queue.top();
    //   toys_queue.pop();
    //
    //   std::cout << q.first << " brinquedos com peso " << q.second << " kg"
    //             << std::endl;
    // }
    // std::cout << std::endl;

    auto total_weight = 0ull;
    auto total_toys = 0ull;

    while ((total_weight < MAX_WEIGHT) and not toys_queue.empty()) {
      toys current_toy = toys_queue.top();
      toys_queue.pop();

      if (total_weight + current_toy.second > MAX_WEIGHT) {
        discarted_toys_queue.push(current_toy);
        continue;
      }

      total_toys += current_toy.first;
      total_weight += current_toy.second;
    }

    std::cout << total_toys << " brinquedos" << std::endl;
    std::cout << "Peso: " << total_weight << " kg" << std::endl;
    std::cout << "sobra(m) " << toys_queue.size() +
    discarted_toys_queue.size()
              << " pacote(s)" << std::endl;

    if (n >= 1)
      std::cout << std::endl;
  }
}
