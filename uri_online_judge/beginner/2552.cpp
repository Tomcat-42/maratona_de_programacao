#include <cstdio>
#include <iomanip>
#include <iostream>
#define MAX 100

using namespace std;

int main(int argc, char **argv) {
    int tab[MAX][MAX], m, n, total;

    while (cin >> m >> n) {
        for (int i = 0; i < m; i++)
            for (int j = 0; j < n; j++) cin >> tab[i][j];

        for (int i = 0; i < m; i++) {
            for (int j = 0; j < n; j++) {
                if (tab[i][j])
                    cout << 9;
                else {
                    total = 0;
                    if (j != 0 && tab[i][j - 1]) total++;
                    if (j != n - 1 && tab[i][j + 1]) total++;
                    if (i != 0 && tab[i - 1][j]) total++;
                    if (i != m - 1 && tab[i + 1][j]) total++;

                    cout << total;
                }
            }
            cout << endl;
        }
    }

    return 0;
}
