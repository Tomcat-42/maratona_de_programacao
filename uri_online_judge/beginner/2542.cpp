#include <cstdio>
#include <iomanip>
#include <iostream>
#define MAX 100
using namespace std;

int main(int argc, char **argv) {
    int M[MAX][MAX], L[MAX][MAX], m, l, n, cm, cl, a;

    while (cin >> n) {
        cin >> m >> l;

        for (int i = 0; i < m; i++)
            for (int j = 0; j < n; j++) cin >> M[i][j];

        for (int i = 0; i < l; i++)
            for (int j = 0; j < n; j++) cin >> L[i][j];

        cin >> cm >> cl;
        cin >> a;

        if (M[cm - 1][a - 1] == L[cl - 1][a - 1])
            cout << "Empate\n";
        else if (M[cm - 1][a - 1] > L[cl - 1][a - 1])
            cout << "Marcos\n";
        else
            cout << "Leonardo\n";
    }

    return 0;
}
