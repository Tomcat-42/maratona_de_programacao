#include <cmath>
#include <cstdio>
#include <iostream>
#include <string>

using namespace std;

int main(int argc, char **argv) {
    int nota;
    char conc;

    cin >> nota;

    if (nota == 0)
        conc = 'E';
    else if (nota >= 1 && nota <= 35)
        conc = 'D';
    else if (nota >= 36 && nota <= 60)
        conc = 'C';
    else if (nota >= 61 && nota <= 85)
        conc = 'B';
    else
        conc = 'A';

    cout << conc << endl;

    return 0;
}
