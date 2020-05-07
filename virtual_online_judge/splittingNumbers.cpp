#include <bitset>
#include <cstdio>
#include <iostream>

using namespace std;

int main(int argc, char **argv) {
    int n, index_set;

    while (cin >> n && n) {
        bitset<32> n_bits(n), a, b;

        index_set = 0;
        for (int i = 0; i < 32; i++) {
            if (n_bits.test(i)) {
                if (index_set++ % 2)
                    b.set(i);
                else
                    a.set(i);
            }
        }

        cout << a.to_ulong() << " " << b.to_ulong() << endl;
    }
    return 0;
}
