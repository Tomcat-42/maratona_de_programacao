#include <cmath>
#include <iostream>
#include <set>

#define SIZE 1000000

using namespace std;

int main(int argc, char **argv) {
    string bitstring, subs;
    int case_num = 0, test, i, j, min_i, max_i, diff;
    unsigned long long int bitint;
    set<char> bits;

    while (cin >> bitstring) {
        cout << "Case " << ++case_num << ":\n";
        cin >> test;
        while (test--) {
            cin >> i >> j;
            bits.clear();

            min_i = min(i, j);
            max_i = max(i, j);
            diff = abs(i - j);

            subs = bitstring.substr(min_i, diff + 1);
            for (auto x : subs) bits.insert(x);

            if (bits.size() == 1)
                cout << "Yes\n";
            else
                cout << "No\n";
        }
    }
    return 0;
}
