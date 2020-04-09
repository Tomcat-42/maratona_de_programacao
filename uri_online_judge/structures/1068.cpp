#include <cstdio>
#include <iomanip>
#include <iostream>
#include <vector>

using namespace std;

int main(int argc, char **argv) {
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(NULL);

    vector<char> p;
    string expr;

    while (cin >> expr) {
        p.clear();

        for (int c : expr) {
            switch (c) {
                case '(':
                    p.push_back(c);
                    break;
                case ')':
                    if (!p.empty() && p.back() == '(') {
                        p.pop_back();
                    } else {
                        p.push_back(c);
                    }
                default:
                    break;
            }
        }

        cout << (p.size() ? "incorrect" : "correct") << endl;
    }

    return 0;
}
