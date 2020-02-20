#include <cstdio>
#include <iomanip>
#include <iostream>
#include <unordered_map>

using namespace std;

enum { DODO, LEO, PEPPER, EMPATE };

int ppt(string nomes[3]) {
	if ((nomes[0] == "pedra" && nomes[1] == "tesoura" && nomes[2] == nomes[1]) ||
        (nomes[0] == "papel" && nomes[1] == "pedra" && nomes[2] == nomes[1]) ||
        (nomes[0] == "tesoura" && nomes[1] == "papel" && nomes[2] == nomes[1]))
		return DODO;
	else if ((nomes[1] == "pedra" && nomes[0] == "tesoura" && nomes[2] == nomes[0]) ||
        (nomes[1] == "papel" && nomes[0] == "pedra" && nomes[2] == nomes[0]) ||
        (nomes[1] == "tesoura" && nomes[0] == "papel" && nomes[2] == nomes[0]))
		return LEO;
	else if ((nomes[2] == "pedra" && nomes[0] == "tesoura" && nomes[1] == nomes[0]) ||
        (nomes[2] == "papel" && nomes[0] == "pedra" && nomes[1] == nomes[0]) ||
        (nomes[2] == "tesoura" && nomes[0] == "papel" && nomes[1] == nomes[0]))
		return PEPPER;
	
	return EMPATE;
}

int main(int argc, char **argv) {
    string nomes[3];
    const unordered_map<int, string> frases = {
        {0, "Os atributos dos monstros vao ser inteligencia, sabedoria..."},
        {1, "Iron Maiden's gonna get you, no matter how far!"},
        {2, "Urano perdeu algo muito precioso..."},
        {3, "Putz vei, o Leo ta demorando muito pra jogar..."},
    };

    while (cin >> nomes[0] >> nomes[1] >> nomes[2]) {
        cout << frases.at(ppt(nomes)) << endl;
    }

    return 0;
}
