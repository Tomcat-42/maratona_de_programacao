#include <cstdio>
#include <iomanip>
#include <iostream>

using namespace std;

int main(int argc, char **argv) {
    // std::ios_base::sync_with_stdio(false);
    // std::cin.tie(NULL);

    unsigned long int test, total, farmers, size, animals, env;

    cin >> test;
    while (test--) {
        total = 0;
        cin >> farmers;
        while (farmers--) {
            cin >> size >> animals >> env;
            total += (size * env);
        }
        cout << total << endl;
    }

    return 0;
}
