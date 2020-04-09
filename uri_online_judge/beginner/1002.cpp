#include <cstdio>
#include <iomanip>
#include <iostream>

#define PI 3.14159

using namespace std;

int main(int argc, char **argv) {
    double r;

    cin >> r;
    cout << "A=" << setprecision(4) << fixed << (PI * r * r) << endl;

    return 0;
}
