#include <cstdio>
#include <iostream>

using namespace std;

void shellsort(int *arr, int n) {
    // auxiliar para guardar o elemento a ser inserido
    int aux;
    int j, k, gaps=0;

    // h-ordena o array
    for (gaps = n/2; gaps >= 1; gaps /= 2) {
        for (j = gaps; j < n; j++) {
            aux = arr[j];
            for (k = j; (k >= gaps) && (aux > arr[k - gaps]); k -= gaps)
                arr[k] = arr[k - gaps];

            arr[k] = aux;
        }
    }
}

int main(int argc, char **argv) {
	std::ios_base::sync_with_stdio(false);
	std::cin.tie(NULL);
    int notas[100], n, x;

    while (scanf("%d %d", &n, &x)!=EOF) {
        for (int i = 0; i < n; i++) scanf("%d", &notas[i]);
        // sort(notas, notas + n, [](int x, int y) { return x > y; });
        shellsort(&notas[0], n);
        while (x--) {
            scanf("%d", &n);
            printf("%d\n", notas[n - 1]);
        }
    }

    return 0;
}
