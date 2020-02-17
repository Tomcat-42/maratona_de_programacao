#include <cmath>
#include <cstdio>
#include <iostream>
#include <string>
#include <sstream>
#include <unordered_map>

#define RECOM_LOWER 110
#define RECOM_UPPER 130

using namespace std;

int main(int argc, char **argv) {
    string vit, input;
	stringstream ss;
    int n, t, total;
    const unordered_map<string, int> vitaminas = {
        {"suco de laranja", 120},
		{"morango fresco", 85},
		{"mamao", 85},
        {"goiaba vermelha", 70},
		{"manga", 56},
		{"laranja", 50},
        {"brocolis", 34},
    };
	
    while ( scanf("%d", &n) && n) {
        total = 0;
        while (n--) {
			cin >> ws;
			getline(cin, input);
			
			ss.clear();
			ss << input;
			
			ss >> t >> ws;
			getline(ss, vit);
            
			total += (t * vitaminas.at(vit));
        }

        if (total < RECOM_LOWER)
            cout << "Mais " << RECOM_LOWER - total << " mg\n";
        else if (total > RECOM_UPPER)
            cout << "Menos " << total - RECOM_UPPER<< " mg\n";
        else
            cout << total << " mg\n";
    }

    return 0;
}
