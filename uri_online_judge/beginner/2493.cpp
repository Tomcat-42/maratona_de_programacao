#include <algorithm>
#include <cmath>
#include <cstdio>
#include <cstring>
#include <iostream>
#include <sstream>
#include <string>
#include <vector>

using namespace std;

char operador(string a) {
    istringstream s(a);

    int x, y, z;

    s >> skipws >> x >> y;
    s.get();
    s >> z;

    if ((x + y) == z)
        return '+';
    else if ((x - y) == z)
        return '-';
    else if ((x * y) == z)
        return '*';
    else
        return 'I';
}

int main(int argc, char **argv) {
    vector<pair<string, char>> eqs_res;
    vector<string> not_win;
    string eq, nome;
    pair<string, char> tmp;
    int n, index;
    char c;

    while (cin >> n >> ws) {
        not_win.clear();
        eqs_res.clear();

        for (int i = 0; i < n; i++) {
            getline(cin, eq);
            tmp.first = eq;
            tmp.second = operador(eq);
            eqs_res.push_back(tmp);
        }
        for (int i = 0; i < n; i++) {
            cin >> nome >> index >> c >> ws;
            if (eqs_res[index - 1].second != c) not_win.push_back(nome);
        }

        if (not_win.size() == 0)
            cout << "You Shall All Pass!" << endl;
        else if (not_win.size() == static_cast<unsigned long int>(n))
            cout << "None Shall Pass!" << endl;
        else {
            sort(not_win.begin(), not_win.end(), [](string a, string b) {
                return lexicographical_compare(a.begin(), a.end(), b.begin(),
                                               b.end());
            });

            for (vector<string>::iterator i = not_win.begin();
                 i != not_win.end(); i++) {
                cout << *i;
                if (next(i) != not_win.end())
                    cout << " ";
                else
                    cout << endl;
            }
        }
    }

    return 0;
}
