#include <iostream>
#include <string>
#include <cstdio>
#include <cmath>

using namespace std;

int main(int argc, char **argv)
{
	string input;
	int c;

	cin >> c;
	cin >> ws;
	while(c--)
	{
		cin >> input;
		printf("%.2f\n", input.length()/100.0);
	}

	return 0;
}
