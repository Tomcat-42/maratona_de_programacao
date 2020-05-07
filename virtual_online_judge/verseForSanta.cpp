#include <cstdio>
#include <iostream>
#include <vector>

using namespace std;

int main(int argc, char **argv) {
    // std::ios_base::sync_with_stdio(false);
    // std::cin.tie(NULL);
    vector<int> verses;
    int tests, s, n, input, tmp_num_presentes, maior_num_presentes, index,
        tmp_segundos, j, i;
    bool nenhum;

    cin >> tests;
    while (tests--) {
        cin >> n >> s;
        verses.clear();

        for (int i = 0; i < n; i++) {
            cin >> input;
            verses.push_back(input);
        }
        nenhum = true;
        tmp_segundos = 0;
        for (i = 0; i < n; i++) {
            if (tmp_segundos + verses[i] > s) {
                nenhum = false;
                break;
            }
        }
        if (i == n - 1 && nenhum) goto PRT;
        maior_num_presentes = index = 0;
        for (i = 0; i < n; i++) {
            tmp_segundos = 0;
            tmp_num_presentes = 0;
            for (j = 0; j < n; j++) {
                if (i != j) {
                    if (tmp_segundos + verses[j] <= s) {
                        tmp_num_presentes++;
                        tmp_segundos += verses[j];
                    } else
                        break;
                }
            }
            // cout << i + 1 << ": " << tmp_num_presentes << endl;
            if (j >= i && tmp_num_presentes > maior_num_presentes) {
                maior_num_presentes = tmp_num_presentes;
                index = i + 1;
            }
        }
    PRT:
        cout << index << endl;
    }

    return 0;
}
