#include <cstdio>
#include <iomanip>
#include <iostream>
#include <vector>

using namespace std;

int main(int argc, char **argv) {
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(NULL);

    int n, t;
    string input;
    vector<char> s;

    cin >> n;
    cin >> ws;
    while (n--) {
        s.clear();
        t=0;
        cin >> input;
        for (auto c : input) {
            if (!s.empty() && s.back() == '<' && c == '>')
                t++, s.pop_back();
            else if (c == '<')
                s.push_back(c);
        }

        cout << t << endl;
    }

    return 0;
}
