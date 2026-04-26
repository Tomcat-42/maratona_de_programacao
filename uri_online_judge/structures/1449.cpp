#include <iostream>
#include <sstream>
#include <unordered_map>
#include <vector>

using std::istringstream;

auto main() -> int {
  std::size_t instances = 0;
  std::cin >> instances;

  while (instances--) {
    std::unordered_map<std::string, std::string> trans;
    std::size_t m = 0, n = 0;
    std::cin >> m >> n;

    while (m--) {
      std::string jp, br;
      std::getline(std::cin >> std::ws, jp);
      std::getline(std::cin >> std::ws, br);

      trans.emplace(jp, br);
    }

    std::vector<std::string> lyrics_lines;
    while (n--) {
      std::string line;
      std::getline(std::cin >> std::ws, line);
      lyrics_lines.push_back(line);
    }

    auto l = lyrics_lines.size();
    for (std::size_t i = 0; i < l; ++i) {
      auto line = lyrics_lines[i];
      istringstream iss(line);
      std::string word;
      std::vector<std::string> words;
      while (iss >> word) words.push_back(word);

      for (std::size_t j = 0; j < words.size(); ++j) {
        std::cout << (trans.count(words[j]) ? trans.at(words[j]) : words[j]);
        if (j < words.size() - 1) std::cout << " ";
      }
      std::cout << std::endl;
    }
    std::cout << std::endl;
  }
}
