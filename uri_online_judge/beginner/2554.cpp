#include <cstdio>
#include <iomanip>
#include <iostream>
#include <sstream>

using namespace std;

int main(int argc, char **argv) {
    int pess, n, d;
    string input, data, tmp;
    ;
    bool flag, flag2;

    while (cin >> n >> d) {
        cin.ignore(1);
        flag2 = false;
        while (d--) {
            getline(cin, input);

            if (flag2) continue;

            istringstream ss(input);
            ss >> tmp;

            flag = true;
            for (int i = 0; i < n; i++) {
                ss >> pess;
                if (!pess) flag = false;
            }

            if (flag) {
                flag2 = true;
                data = tmp;
            }
        }
        if (flag2)
            cout << data << endl;
        else
            cout << "Pizza antes de FdI" << endl;
    }

    return 0;
}
