#include <cmath>
#include <cstdio>
#include <iostream>
#include <string>

using namespace std;

int main(int argc, char **argv) {
    long int xp, mult;

    while (scanf("%ld %ld", &mult, &xp) && mult){
		cout << (mult * xp)<< endl;
	}

	return 0;
}
