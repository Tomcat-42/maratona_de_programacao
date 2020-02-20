#include <cstdio>
#include <iostream>
#include <algorithm>
#include <numeric>

using namespace std;

int main(int argc, char **argv) {
	int n, rgb[3];
	string mode;

	cin >> n;
	cin.ignore(1,'\n');
	for(int i=0; i<n; i++) {
		cin >> mode;
		cin >> rgb[0] >> rgb[1] >> rgb[2];
		cin.ignore(1, '\n');
		
		cout << "Caso #" << (i+1) << ": ";

		if(mode == "min" || mode == "max") {
			sort(rgb, rgb+3);
			cout << (mode=="min" ? rgb[0] : rgb[2]) << endl;
		}
		else if(mode == "mean")
			cout << int(double(rgb[0]+rgb[1]+rgb[2])/3.0) << endl;
		else
			cout << int(0.3*rgb[0] + 0.59*rgb[1] + 0.11*rgb[2]) << endl;
	}
    return 0;
}
