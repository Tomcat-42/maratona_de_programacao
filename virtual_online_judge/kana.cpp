#include <math.h>

#include <cstdio>
#include <iostream>
#define VOID(h) (floor((h) / 2.0) + 10)
#define STRIKE(h) ((h)-10)
using namespace std;

bool dragon(int h, int v, int s) {
    while (h >= 20 && v--)
        h = VOID(h);

    while (h > 0 && s--)
        h = STRIKE(h);

    if (h > 0) return false;

    return true;
}

int main(int argc, char **argv) {
    int tests, h, max_void, max_strike;

    cin >> tests;
    while (tests--) {
        cin >> h >> max_void >> max_strike;
        if (dragon(h, max_void, max_strike))
            cout << "YES\n";
        else
            cout << "NO\n";
    }
    return 0;
}
