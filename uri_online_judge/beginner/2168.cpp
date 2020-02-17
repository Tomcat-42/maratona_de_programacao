#include <cmath>
#include <cstdio>
#include <iostream>
#include <string>

#define MAX 101
using namespace std;

int main(int argc, char **argv) {
    int n;
    int cidade[MAX][MAX];
    int counter;
    cin >> n;
    for (int i = 0; i <= n; i++)
        for (int j = 0; j <= n; j++) cin >> cidade[i][j];

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            counter = 0;
            if (cidade[i][j]) counter++;
            if (cidade[i][j + 1]) counter++;
            if (cidade[i + 1][j + 1]) counter++;
            if (cidade[i + 1][j]) counter++;

            cout << (counter >= 2 ? "S" : "U");
        }
        cout << endl;
    }

    return 0;
}
