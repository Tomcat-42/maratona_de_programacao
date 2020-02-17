#include <algorithm>
#include <cmath>
#include <cstdio>
#include <iostream>
#include <string>

using namespace std;

int main(int argc, char **argv) {
    int n;
    string nome;
    float notas[7], nota = 0, dificuldade;

    cin >> n;

    while (n--) {
        cin >> ws;

        getline(cin, nome);
        cin >> dificuldade;

        for (int i = 0; i < 7; i++) cin >> notas[i];
        sort(notas, notas + 7, [=](double x, double y) { return x < y; });

        nota = 0;
        for (int i = 1; i < 6; i++) nota += (notas[i] * dificuldade);

        printf("%s %.2lf\n", nome.c_str(), nota);
    }

    return 0;
}
