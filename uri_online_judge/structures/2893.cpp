#include <iostream>

constexpr auto MAXN = std::size_t{2000001};
constexpr auto MOD = std::size_t{1000007};

std::size_t f[MAXN];

auto fib(std::size_t k, std::size_t n) -> std::size_t {
  auto sum = std::size_t{0};
  for (auto i = std::size_t{0}; i <= n; i++) {
    f[i] = i < k ? i : sum;
    sum = (sum + f[i] + MOD - (i >= k ? f[i - k] : 0)) % MOD;
  }
  return f[n] % MOD;
}

auto main() -> int {
  auto t = std::size_t{}, k = std::size_t{}, n = std::size_t{};
  std::cin >> t;
  while (t--) {
    std::cin >> k >> n;
    std::cout << fib(k, n - 1) << std::endl;
  }
}
