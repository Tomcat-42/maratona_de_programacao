#include <cstdio>
#include <iostream>
#include <map>
#include <numeric>
#include <set>
#include <sstream>

using namespace std;

int main(int argc, char **argv) {
    map<char, set<char>> hand;
    map<char, set<char>>::iterator it;

    string input;
    char suit, rank;

    int suits_stoppeds;
    int rules[7];

    while (getline(cin, input)) {
        istringstream iss(input);
        hand.clear();
        suits_stoppeds = 0;
        fill(rules, rules + 7, 0);
        while (iss >> rank >> suit) {
            set<char> tmp;

            if ((it = hand.find(suit)) != hand.end()) {
                it->second.insert(rank);
            } else {
                tmp.insert(rank);
                hand[suit] = tmp;
            }
        }

        /* constroi os pontos das regras */
        for (auto i : hand) {
            /* qtn de cartas na mão */
            int size = i.second.size();
            bool stopped = false;

            /* Regra 1*/
            if (i.second.count('A')) {
                rules[0] += 4;
                /* Regra stopped */
                stopped = true;
            }
            if (i.second.count('K')) {
                rules[0] += 3;
                /* Regra 2*/
                if (size == 1) {
                    rules[1] -= 1;
                }
                if (size >= 2) {
                    /* Regra stopped */
                    stopped = true;
                }
            }
            if (i.second.count('Q')) {
                rules[0] += 2;
                /* Regra 3*/
                if (size <= 2) {
                    rules[2] -= 1;
                }
                if (size > 2) {
                    /* Regra stopped */
                    stopped = true;
                }
            }
            if (i.second.count('J')) {
                rules[0] += 1;
                /* Regra 4*/
                if (size <= 3) {
                    rules[3] -= 1;
                }
            }
            /* Regra 5 */
            if (size == 2) {
                rules[4] += 1;
            }
            /* Regra 6 */
            if (size == 1) {
                rules[5] += 2;
            }

            /* Regra 7 */
            if (size == 0) {
                rules[6] += 2;
            }

            if (stopped) suits_stoppeds++;
        }

        /*Testa as possibilidades*/

        /*Testa p no trump*/
        int trump_sum = accumulate(rules, rules + 4, 0,
                                   [](int a, int b) -> int { return a + b; });
        // cout << trump_sum << endl;
        if (trump_sum >= 16 && suits_stoppeds == 4) {
            cout << trump_sum << endl;
            cout << "BID NO-TRUMP" << endl;
            continue;
        }

        /*Testa p aposta em um naipe */
        int normal_sum = accumulate(rules, rules + 7, 0,
                                    [](int a, int b) -> int { return a + b; });

        if (normal_sum >= 14) {
            /* Naipe com mais cartas */
            char naipe = hand.begin()->first;
            int tam = hand.begin()->second.size();
            for (auto k = next(hand.begin()); k != hand.end(); k++) {
                if (k->second.size() >= tam) {
                    naipe = k->first;
                    tam = k->second.size();
                }
            }
            cout << normal_sum << endl;
            cout << "BID " << naipe << endl;
            continue;
        }

        cout << normal_sum << endl;
        cout << "PASS" << endl;
    }
    return 0;
}
