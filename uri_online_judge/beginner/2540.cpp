#include <cstdio>
#include <iomanip>
#include <iostream>

using namespace std;

int main(int argc, char **argv) {
    int y, t, k;

    while (cin >> t) {
        y = 0;
        for (int i = 0; i < t; i++) {
            cin >> k;
            if (k) y++;
        }

        if (double(y) < double((t * 2.0) / 3.0))
            cout << "acusacao arquivada" << endl;
        else
            cout << "impeachment" << endl;
    }

    return 0;
}
