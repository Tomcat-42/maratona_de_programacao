#include <iostream>
#include <string>

using namespace std;

int main(int argc, char **argv) {
    int n,m;
    string alf;
   
	while (cin >> alf) {
		
		cin >> n;
		while(n--){
			cin >> m;
			cout << alf[m-1];
		}
		cout << endl;
		cin >> ws;
	}

	return 0;
}
