#include <cmath>
#include <cstdio>
#include <iostream>
#include <string>

using namespace std;

int main(int argc, char **argv) {
    int arr[100], n, queda = -1;
    bool caiu = false;

    cin >> n;
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
        if (i > 0 && arr[i] < arr[i - 1] && !caiu) {
            caiu = true;
            queda = i;
        }
    }

    cout << queda + 1 << endl;

    return 0;
}
