#include <cmath>
#include <cstdio>
#include <iostream>

using namespace std;

int main(int argc, char **argv) {
    int n;
    double sqrt5 = sqrt(5);

    cin >> n;

    printf("%.1lf\n",
           (pow((1 + sqrt5) / 2, n) - pow((1 - sqrt5) / 2, n)) / sqrt5);

    return 0;
}
