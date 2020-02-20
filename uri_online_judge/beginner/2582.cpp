#include <cstdio>
#include <iomanip>
#include <iostream>

using namespace std;

int main(int argc, char **argv) {
    const char sys[][15] = {
        "PROXYCITY", "P.Y.N.G.",   "DNSUEY!",        "SERVERS",
        "HOST!",     "CRIPTONIZE", "OFFLINE DAY",   "SALT",
        "ANSWER!",   "RAR?",       "WIFI ANTENNAS",
    };
    int n, a, b;

	cin>> n;

	while(n--) {
		cin >> a >>b;
		cout << sys[a+b] << endl;
	}

    return 0;
}
