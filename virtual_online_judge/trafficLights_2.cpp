#include <algorithm>
#include <cstdio>
#include <iostream>
#include <vector>

#define MAX_TIME (3600 * 5)
#define MIN (60)
#define HR (3600)
using namespace std;

int main(int argc, char **argv) {
    vector<int> semaf;
    int verdes[MAX_TIME + 1], input, tempo;
    bool sync;

    while (cin >> input && input) {
        semaf.clear();
        sync = false;
        fill(verdes, verdes + MAX_TIME, 0);

        semaf.push_back(input);
        while (cin >> input && input) semaf.push_back(input);

        for (int i = 0; i < semaf.size(); i++) {
            for (int j = semaf[i] * 2; j <= MAX_TIME; j += semaf[i] * 2)
                for (int k = 0; (j + k) <= MAX_TIME && k < semaf[i] - 5; k++)
                    verdes[j + k]++;
        }

        tempo = 0;
        for (tempo = 0; tempo < MAX_TIME; tempo++) {
            if (verdes[tempo] == semaf.size()) {
                sync = true;
                break;
            }
        }

        if (sync) {
            int h = tempo / HR;
            int m = (tempo - (h * HR)) / MIN;
            int s = (tempo - (h * HR) - (m * MIN));
            // cout << tempo << endl;
            printf("%02d:%02d:%02d\n", h, m, s);
        } else
            cout << "Signals fail to synchronize in 5 hours\n";
    }
    return 0;
}
