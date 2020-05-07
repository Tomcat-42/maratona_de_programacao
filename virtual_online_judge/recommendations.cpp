#include <algorithm>
#include <cstdio>
#include <iostream>
#include <vector>

using namespace std;

int main(int argc, char **argv) {
    // std::ios_base::sync_with_stdio(false);
    // std::cin.tie(NULL);

    int n, input;
    vector<pair<int, int>> news_time;

    cin >> n;
    for (int i = 0; i < n; i++) {
        cin >> input;
        news_time.push_back(make_pair(input, 0));
    }

    for (int i = 0; i < n; i++) {
        cin >> input;
        news_time[i].second = input;
    }

    sort(news_time.begin(), news_time.end(),
         [](pair<int, int> a, pair<int, int> b) {
             if (a.first == b.first)
                 return a.second < b.second;
             else
                 return a.first < b.first;
         });

    int total = 0;
    for (int i = 0; i < (n - 1);) {
        int ocu = 1;

        if (news_time[i].first != news_time[i + 1].first)
            i++;
        else {
            for (int j = i; news_time[j].first != news_time[j + 1].first; j++)
                ocu++;

            for (int k=i; k<i+ocu; k++ ) {
                
            }
        }
    }
}

return 0;
}
