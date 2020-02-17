#include <iostream>
#include <string>
#include <cstdio>
#include <cmath>

using namespace std;


int main(int argc, char **argv)
{
	pair<double,double> ret;
	int n;
	
	cin >> n;
	ret.first = n/log(n);
	ret.second = (n*1.25506)/log(n);
	
	printf("%.1lf %.1lf\n", ret.first, ret.second);
	return 0;
}
