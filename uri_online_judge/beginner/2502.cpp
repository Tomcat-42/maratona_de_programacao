#include <algorithm>
#include <cctype>
#include <cmath>
#include <cstdio>
#include <iostream>
#include <string>
#include <unordered_map>

using namespace std;

int main(int argc, char **argv) {
    unordered_map<char, char> cifra;
    int c, n;
    string line, c1, c2;
    string::iterator i, j;

    while (cin >> c >> n) {
		cin >> ws;
        cifra.clear();
        getline(cin, c1);
        getline(cin, c2);
		
        for (i = c1.begin(), j = c2.begin(); i != c1.end(); i++, j++) {
			cifra[*j] = *i;
			cifra[*i] = *j;
        }
        
        while (n--) {
            getline(cin, line);
			for_each(line.begin(), line.end(), [&](char &ch) {
                if (cifra.count(toupper(ch))) {
					if(isalpha(ch))
						ch = (islower(ch) ? tolower(cifra[toupper(ch)]) : cifra[ch]);
					else
						ch = tolower(cifra[ch]);
				}
            });

            cout << line << endl;
        }
		cout << endl;
    }

    return 0;
}
