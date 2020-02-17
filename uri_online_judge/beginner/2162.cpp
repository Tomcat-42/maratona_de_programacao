#include <cstdio>
#include <iostream>

enum { ALTO, BAIXO };

using namespace std;

int main(int argc, char **argv) {
    int paisagem[100];
    int n;
    bool atual = true, ant = false, resul = true;

    cin >> n;
    
	for (int i = 0; i < n; i++) {
        cin >> paisagem[i];
        if (i > 0 && resul) {
            if (paisagem[i] == paisagem[i - 1]) {
                resul = false;
                break;
            } else {
				atual = paisagem[i - 1] > paisagem[i]; 
			}


			else if (paisagem[i] > paisagem[i - 1]) {
				resul = !(paisagem[i] > paisagem [i - 1]) != atual;
                atual = ALTO;
            } else if (paisagem[i] < paisagem[i - 1])
				resul = (paisagem[i] < paisagem [i - 1]) != atual;
                atual = BAIXO;
        }
    }
    
	cout << resul << endl;

    return 0;
}
