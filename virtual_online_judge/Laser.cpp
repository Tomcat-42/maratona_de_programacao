#include <cstdio>
#include <iostream>
#include <vector>

using namespace std;

int minHoles(int h, int w, vector<int> heights) {
    int total = h - heights[0];

    for (int i = 0; i < (w - 1); i++) {
        if (heights[i] > heights[i + 1]) {
            total += (heights[i] - heights[i + 1]);
        }
    }

    return total;
}

int main(int argc, char **argv) {
    vector<int> heights;
    int w, h, inp;

    while (cin >> h >> w && h) {
        heights.clear();
        for (int i = 0; i < w; i++) {
            cin >> inp;
            heights.push_back(inp);
        }
        cout << minHoles(h, w, heights) << endl;
    }

    return 0;
}
