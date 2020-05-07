#include <cstdio>
#include <iomanip>
#include <iostream>

#define MAX_CHANNEL 100

using namespace std;

int main(int argc, char **argv) {
    int a, b, r1, r2;
    while (cin >> a >> b && a >= 0) {
        if (a <= b) {
            r1 = a + (MAX_CHANNEL - b);
            r2 = b - a;
        } else {
            r1 = b + (MAX_CHANNEL - a);
            r2 = a - b;
        }
        cout << min(r1, r2) << endl;
    }

    return 0;
}
