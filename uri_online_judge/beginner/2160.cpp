#include <iostream>
#include <string>
#include <cstdio>
#include <cmath>

using namespace std;

int main(int argc, char **argv)
{
	string form;
	int len;
	getline(cin, form);
	len = form.length();

	cout << (len <=80 ? "YES" : "NO") << endl;
	//cout << len << endl;
	return 0;
}
