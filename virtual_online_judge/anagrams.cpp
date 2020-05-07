#include <algorithm>
#include <cstdio>
#include <iostream>
#include <set>
#include <string>
#include <vector>

using namespace std;

bool isAnagram(string x, string y) {
    multiset<char> str1, str2;
    int size1 = x.size(), size2 = y.size();

    for (auto i : x)
        if (i != ' ') str1.insert(i);

    for (auto i : y)
        if (i != ' ') str2.insert(i);

    return str1 == str2;
}

int main(int argc, char **argv) {
    vector<string> words;
    string inp;
    int t;

    cin >> t;
    cin >> ws;
    while (t--) {
        words.clear();

        while (getline(cin, inp) && inp.size()) {
            words.push_back(inp);
        }

        sort(words.begin(), words.end(),
             [](string a, string b) { return a < b; });

        for (auto i = words.begin(); i != words.end(); i++) {
            for (auto j = i + 1; j != words.end(); j++) {
                if (isAnagram(*i, *j)) cout << *i << " = " << *j << endl;
            }
        }
        if (t) cout << endl;
    }

    return 0;
}
