#include <algorithm>
#include <cmath>
#include <cstdio>
#include <iostream>
#include <string>

using namespace std;

int main(int argc, char **argv) {
    string bits;

    cin >> bits;

    bits.append((count(bits.begin(), bits.end(), '1')) % 2 ? "1" : "0");

    cout << bits << endl;

    return 0;
}
