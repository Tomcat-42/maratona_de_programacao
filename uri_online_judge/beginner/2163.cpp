#include <iostream>
#include <stack>

#define MAX 1000

using namespace std;

int arr[MAX][MAX];

pair<int, int> sabre(stack<pair<int, int>> a);

int main(int argc, char **argv) {
    stack<pair<int, int>> pos42;
    pair<int, int> p;
    int m, n;

    cin >> m >> n;
    for (int i = 0; i < m; i++)
        for (int j = 0; j < n; j++) {
            cin >> arr[i][j];
            if (arr[i][j] == 42 && i != m - 1 && j != n - 1 && i != 0 &&
                j != 0) {
                p.first = i;
                p.second = j;
                pos42.push(p);
            }
        }
    p = sabre(pos42);

    cout << p.first + 1 << " " << p.second + 1 << endl;

    return 0;
}

pair<int, int> sabre(stack<pair<int, int>> a) {
    pair<int, int> ret;

    while (!a.empty()) {
        ret = a.top();

        if (arr[ret.first - 1][ret.second - 1] == 7 &&
            arr[ret.first - 1][ret.second] == 7 &&
            arr[ret.first - 1][ret.second + 1] == 7 &&
            arr[ret.first][ret.second + 1] == 7 &&
            arr[ret.first + 1][ret.second + 1] == 7 &&
            arr[ret.first + 1][ret.second] == 7 &&
            arr[ret.first + 1][ret.second - 1] == 7 &&
            arr[ret.first][ret.second - 1] == 7)
            return ret;

        a.pop();
    }

    ret.first = ret.second = -1;
    return ret;
}
