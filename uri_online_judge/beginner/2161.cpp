#include <iostream>
#include <string>
#include <cstdio>
#include <cmath>

using namespace std;

double frac(int lvl);

int main(int argc, char **argv)
{
	int n;

	cin >> n;
	printf("%.10lf\n", 3+frac(n));

	return 0;
}

double frac(int lvl)
{
	if(lvl==0) return 0;
	return ( 1.0/(6.0+frac(lvl-1)));
}
