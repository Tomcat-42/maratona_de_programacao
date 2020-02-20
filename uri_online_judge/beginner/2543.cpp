#include <cstdio>
#include <iomanip>
#include <iostream>

using namespace std;

int main(int argc, char **argv) {
    int n, l, i, cs;
    bool j;

    while (cin >> n >> l) {
        cs = 0;
        while (n--) {
            cin >> i >> j;
            if (!j && i == l) cs++;
        }
        cout << cs << endl;
    }

    return 0;
}
