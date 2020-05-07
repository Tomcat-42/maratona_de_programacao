#include <cstdio>
#include <cstdlib>
#include <iostream>
#include <numeric>
#include <string>

using namespace std;

int digSum(string x) {
    int sum = 0;

    for (auto y : x) sum += y - '0';

    if (sum < 10) return sum;

    return digSum(to_string(sum));
}

int main(int argc, char **argv) {
    string x;
    while (cin >> x && x != "0") {
        cout << digSum(x) << endl;
    }
    return 0;
}
