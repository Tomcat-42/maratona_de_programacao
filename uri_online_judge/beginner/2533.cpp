#include <algorithm>
#include <cstdio>
#include <iostream>
#include <iomanip>
#include <numeric>
#include <vector>

using namespace std;

int main(int argc, char **argv) {
    int m;
    vector<pair<int, int>> dis;
    pair<int, int> tmp;
    double sum1=0, sum2=0;

    while (cin >> m) {
		dis.clear();
        while (m--) {
            cin >> tmp.first >> tmp.second;
            dis.push_back(tmp);
        }
		//sum1=0;
		//sumfor(auto i: dis) sum1+=i.first*i.second;
		//sumsum2=0;
		//sumfor(auto i: dis) sum2+=i.second;
		//sumsum2*=100;
        sum1 = accumulate(
            dis.begin(), dis.end(), 0.0,
            [](double sum, pair<int, int> x) { return sum + x.first * x.second; });
        sum2 = 100.0 * accumulate(dis.begin(), dis.end(), 0.0,
                                [](double sum, pair<int, int> x) {
                                    return sum + x.second;
                                });
		
		//printf("%.8lf\n", (sum1/sum2));
		//cout << fixed << setprecision(4) << sum1 << " " << sum2 << endl;
		cout << fixed << setprecision(4) << ((double)sum1/(double)sum2) << endl;
    }

    return 0;
}
