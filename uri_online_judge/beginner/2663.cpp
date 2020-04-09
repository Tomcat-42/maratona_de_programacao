#include <algorithm>
#include <iostream>
#include <vector>

using namespace std;

int main(int argc, char **argv) {
	std::ios_base::sync_with_stdio(false);
	std::cin.tie(NULL);
    
	int num, min, input;
	vector<int> pts;
	
	cin >> num >> min;

	while(num--) {
		cin >> input;
		pts.push_back(input);
	}

	sort(pts.begin(), pts.end(),
			[](int a, int b) { return a>b;});

	while(pts[min-1]==pts[min]) min++;
		
	cout << min << '\n';
     
    return 0;
}
