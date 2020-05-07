#include <algorithm>
#include <cmath>
#include <cstdio>
#include <iostream>
#include <iterator>

using namespace std;

int main(int argc, char **argv) {
    // std::ios_base::sync_with_stdio(false);
    // std::cin.tie(NULL);
    string perm;
    const string bs = "bb";
    int t, n, k;
    int i, j;

    cin >> t;
    while (t--) {
        cin >> n >> k;

        unsigned long int total = (pow(n, 2) - n) / 2;
        unsigned long int metade = total / 2;

        for (perm = "", i = 0; i < n; i++) perm += "a";

        // Descobre as posições dos "b's"
        int num = 0;
        for (i = n - 2; i >= 0; i--)
            for (j = n - 1; j > i; j--)
                if (++num == k) goto PRT;

    PRT:
        perm[i] = perm[j] = 'b';
        cout << perm << endl;
    }
    return 0;
}
