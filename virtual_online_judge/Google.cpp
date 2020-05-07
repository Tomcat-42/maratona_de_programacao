#include <algorithm>
#include <cstdio>
#include <iostream>
#include <string>
#include <vector>

using namespace std;

int main(int argc, char **argv) {
    vector<pair<string, int>> sites;
    string input_str;
    int input_int, t;

    cin >> t;
    for (int i = 1; i <= t; i++) {
        sites.clear();
        for (int i = 0; i < 10; i++) {
            cin >> input_str >> input_int;
            sites.push_back(make_pair(input_str, input_int));
        }
        stable_sort(sites.begin(), sites.end(),
             [](pair<string, int> a, pair<string, int> b) -> int {
                 return a.second > b.second;
             });
    
        cout << "Case #" << i << ":\n";
        for (auto i=sites.begin();;i++) {
            cout << i->first << "\n";
            if(next(i)->second != i->second)
                break;
        }
    }

    return 0;
}
