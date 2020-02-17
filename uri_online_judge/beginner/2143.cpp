#include <iostream>
#include <string>
#include <cstdio>
#include <cmath>

using namespace std;

int main(int argc, char **argv)
{
	int t,n;
	while(scanf("%d", &t) && t)
		while(t--)
		{
			cin >> n;
			cout << ( !(n%2) ? (n-2)*2 + 2 : (n-1)*2 + 1) << endl;
		}

	return 0;
}
