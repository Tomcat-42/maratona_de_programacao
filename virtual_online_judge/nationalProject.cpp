// g++ -std=c++11 -Wall -lm -g -02 nationalProject.cpp -o nationalProject.out
#include <bits/stdc++.h>

#define sws                           \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL)
#define ff first
#define ss second
#define ll long long
#define ld long double
#define pb push_back
#define eb emplace_back
#define mp make_pair
#define mt make_tuple
#define pii pair<int, int>
#define vi vector<int>
#define vl vector<ll>
#define vii vector<pii>
#define endl '\n'

using namespace std;

int main(int argc, char **argv) {
    ll n, b, g, tests;

    cin >> tests;
    while (tests--) {
        cin >> n >> g >> b;
        ll total = 0, goodPav = 0, badPav = 0;

        while (true) {
            for (int i = 0; i < g; i++) {
                goodPav++;
                total++;
                if (goodPav == (n / 2) && badPav == 0) {
                    total = n;
                    goto PRT;
                } else if (goodPav == (n / 2))
                    goto PRT;
            }
            badPav += b;
            total += b;
        }
    PRT:
        cout << (total) << endl;
    }
    return 0;
}
