#include <algorithm>
#include <cstdio>
#include <iomanip>
#include <iostream>

using namespace std;

int main(int argc, char **argv) {
    string n;

    while (cin >> n && n != "#") {
        if (next_permutation(n.begin(), n.end()))
            cout << n << endl;
        else
            cout << "No Successor" << endl;
    }

    return 0;
}
