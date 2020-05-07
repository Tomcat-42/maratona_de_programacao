#include <cstdio>
#include <iostream>
#include <sstream>
#include <utility>
#include <vector>

using namespace std;

int main(int argc, char **argv) {
    // std::ios_base::sync_with_stdio(false);
    // std::cin.tie(NULL);
    string line, tmp;
    vector<string> pilha_cartas, hand;
    int test, card_val;

    cin >> test;
    cin >> ws;
    for (int i = 1; i <= test; i++) {
        pilha_cartas.clear();
        hand.clear();

        getline(cin, line);
        istringstream cartas(line);
        int j = 0;
        while (cartas >> tmp) {
            if (j++ <= 27)
                pilha_cartas.push_back(tmp);
            else
                hand.push_back(tmp);
        }

        int y = 0;
        for (int l = 0; l < 3; l++) {
            tmp = pilha_cartas.back();
            pilha_cartas.pop_back();
            card_val = (isdigit(tmp[0]) ? (tmp[0] - '0') : (10));
            y += card_val;

            for (int m = (10 - card_val); m > 0; m--) pilha_cartas.pop_back();
        }

        for (auto n : hand) pilha_cartas.push_back(n);

        cout << "Case " << i << ": " << pilha_cartas[y - 1] << endl;
    }

    return 0;
}
