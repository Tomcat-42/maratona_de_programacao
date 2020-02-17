#include <cmath>
#include <cstdio>
#include <iostream>
#include <limits>
#include <string>

using namespace std;

int main(int argc, char **argv) {
    unsigned long long int patos;

    while (scanf("%llu", &patos) &&
           patos != numeric_limits<unsigned long long int>::max()) {
        printf("%llu\n", (patos? (patos - 1):0) );
    }

    return 0;
}
