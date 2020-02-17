#include <cmath>
#include <cstdio>
#include <iostream>
#include <string>

#define ABS(a) (a) < 0 ? -(a) : (a)

using namespace std;

int main(int argc, char **argv) {
    long long int a, b, c;

    cin >> a >> b >> c;

    if ( !(a >= b + c) && !(b >= a + c) && !(c >= a + b)) {
        if (a == b && b == c)
            cout << "Valido-Equilatero" << endl;
        else if (a != b && b != c && a!=c)
            cout << "Valido-Escaleno" << endl;
        else
            cout << "Valido-Isoceles" << endl;

        cout << "Retangulo: ";
        if ((a * a == b * b + c * c) || (b * b == a * a + c * c) ||
            (c * c == a * a + b * b))
            cout << "S" << endl;
        else
            cout << "N" << endl;
    } else
        cout << "Invalido" << endl;

    return 0;
}
