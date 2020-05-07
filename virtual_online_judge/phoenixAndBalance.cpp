#include <cmath>
#include <cstdio>
#include <iostream>

using namespace std;

int main(int argc, char **argv) {
    // std::ios_base::sync_with_stdio(false);
    // std::cin.tie(NULL);

    int tests, n, pilha1, pilha2;

    cin >> tests;
    while (tests--) {
        cin >> n;
        pilha1 = pilha2 = 0;
        for (int i = 1; i <= n; i++) {
            if (i <= ((n / 2) - 1) || i == n)
                pilha1 += pow(2.0, i);
            else
                pilha2 += pow(2.0, i);
        }
        cout << abs(pilha2 - pilha1) << endl;
    }

    return 0;
}
