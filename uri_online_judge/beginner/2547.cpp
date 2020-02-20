#include <cstdio>
#include <iomanip>
#include <iostream>

using namespace std;

int main(int argc, char **argv) {
    int n, max, min, alt, tot;

	while(cin >> n >> min >> max) {
		tot=0;
		while(n--) {
			cin >> alt;
			if(alt>=min && alt <=max) tot++;
		}
		cout << tot << endl;
	}

    return 0;
}
