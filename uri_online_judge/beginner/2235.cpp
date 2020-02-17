#include <algorithm>
#include <cmath>
#include <cstdio>
#include <iostream>
#include <vector>

using namespace std;

int main(int argc, char **argv) {
    vector<int> tick(3);

    cin >> tick[0] >> tick[1] >> tick[2];
    
	sort(tick.begin(), tick.end(), [=](int x, int y) { return x > y; });
	
	cout << ( !(tick[0] - tick[1] - tick[2]) ||
			(tick[0] == tick[1] || tick[1] == tick[2]) ? "S" : "N") << endl;

    return 0;
}
