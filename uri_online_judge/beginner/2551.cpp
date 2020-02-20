#include <cstdio>
#include <iomanip>
#include <iostream>

using namespace std;

int main(int argc, char **argv) {
    int n, i, j;
    double rec;

    while (cin >> n) {
        rec = 0;
        for (int k = 1; k <= n; k++) {
            cin >> i >> j;
            if (double(j) / double(i) > rec) {
                rec = double(j) / double(i);
                cout << k << endl;
            }
        }
    }

    return 0;
}
