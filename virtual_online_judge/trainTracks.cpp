#include <cstdio>
#include <iostream>
#include <sstream>
#include <vector>

using namespace std;

int main(int argc, char **argv) {
    string inp;
    int t, male, female, size;

    cin >> t;
    cin >> ws;
    while (t--) {
        getline(cin, inp);
        male = female = size = 0;

        istringstream s(inp);
        for (string x; s >> x;) {
            size++;
            if (x == "FF")
                female++;
            else if (x == "MM")
                male++;
        }

        if (size > 1 && male == female)
            cout << "LOOP" << endl;
        else
            cout << "NO LOOP" << endl;
    }
    return 0;
}
