#include <iostream>
#include <string>

auto main() -> int {
  std::string a, b;
  std::cin >> a >> b;

  if (a < b) {
    std::cout << a << std::endl << b << std::endl;
  } else {
    std::cout << b << std::endl << a << std::endl;
  }
}
