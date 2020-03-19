#include <algorithm>
#include <cstdio>
#include <iomanip>
#include <iostream>
#include <vector>

using namespace std;

int main(int argc, char **argv) {
    vector<string> bd;
    int n, c, max_len, num;
    string input;
    bool achou;

    cin >> n;
    cin.ignore(1, '\n');
    while (n--) {
        cin >> input;
        cin.ignore(1, '\n');
        bd.push_back(input);
    }

    sort(bd.begin(), bd.end(), [](string a, string b) { return (a < b); });

    cin >> c;
    cin.ignore(1, '\n');
    while (c--) {
        cin >> input;
        cin.ignore(1, '\n');
        num = max_len = 0;
        achou = false;
        for (auto i = bd.begin(); i != bd.end(); i++) {
            if (i->substr(0, input.length()) == input) {
                achou = true;
                num++;
                if (i->length() > max_len) max_len = i->length();
                if (!(next(i)->substr(0, input.length()) == input)) break;
            }
        }

        if (achou)
            cout << num << " " << max_len << endl;
        else
            cout << -1 << endl;
    }

    return 0;
}
