#include <iostream>
#include <unordered_set>

int main(int argc, char **argv) {
	std::ios_base::sync_with_stdio(false);
	std::cin.tie(NULL);

	std::unordered_set<std::string> tesouro;
	std::string joia;

    while (getline(std::cin, joia)) tesouro.insert(joia);
	std::cout << tesouro.size() << '\n';

    return 0;
}
