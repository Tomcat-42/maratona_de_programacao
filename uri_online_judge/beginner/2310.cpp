#include <cmath>
#include <cstdio>
#include <iostream>
#include <string>

using namespace std;

int main(int argc, char **argv) {
    string nome;
    double saque[2], bloq[2], atk[2];
    double saquet[2], bloqt[2], atkt[2];
    int n;

    cin >> n;
    while (n--) {
        cin >> nome;
        
		cin >> saque[0] >> bloq[0] >> atk[0];
        cin >> saque[1] >> bloq[1] >> atk[1];
        
		saquet[0] += saque[0], bloqt[0] += bloq[0], atkt[0] += atk[0];
        saquet[1] += saque[1], bloqt[1] += bloq[1], atkt[1] += atk[1];
    }

    printf("Pontos de Saque: %.2lf %%.\n",   100.0 * saquet[1] / saquet[0]);
    printf("Pontos de Bloqueio: %.2lf %%.\n",100.0 * bloqt[1] / bloqt[0]);
    printf("Pontos de Ataque: %.2lf %%.\n",  100.0 * atkt[1] / atkt[0]);

    return 0;
}
