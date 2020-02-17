#include <cmath>
#include <cstdio>
#include <iostream>
#include <string>
#define ABS(x) (((x) < 0) ? -(x) : (x))
using namespace std;

int main(int argc, char **argv) {
    pair<int, int> analog, trein;
    int m, n, tmp;

    while(cin >> m >> n) {
		for (int i = 0; i < m; i++) {
    	    for (int j = 0; j < m; j++) {
    	        cin >> tmp;
    	        if (tmp == 1)
    	            trein.first = i, trein.second = j;
    	        else if (tmp == 2)
    	            analog.first = i, analog.second = j;
    	    }
    	}
    	
		cout << (ABS(trein.first - analog.first) +
    	         ABS(trein.second - analog.second))
    	     << endl;
	}
    return 0;
}
