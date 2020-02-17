#include <cmath>
#include <cstdio>
#include <iostream>
#include <string>

using namespace std;

int main(int argc, char **argv) {
    int tests, bonus, atk, def, lvl;
    double golpeG, golpeD;

    cin >> tests;
    while (tests--) {
        cin >> bonus;

        cin >> atk >> def >> lvl;
        golpeD = (atk + def) / 2 + (lvl % 2 ? 0 : bonus);

        cin >> atk >> def >> lvl;
        golpeG = (atk + def) / 2 + (lvl % 2 ? 0 : bonus);

        if (golpeD > golpeG)
            cout << "Dabriel" << endl;
        else if (golpeG > golpeD)
            cout << "Guarte" << endl;
        else
            cout << "Empate" << endl;
    }

    return 0;
}
