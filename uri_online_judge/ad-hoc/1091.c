#include <stdio.h>

int main() {
    // numero de consultas
    int k, i;

    // coordenadas do ponto divisor
    int dx, dy;

    // coordenadas da residência
    int rx, ry;
    while (1) {
        scanf("%d", &k);
        if (k == 0) return 0;
        ;

        scanf("%d %d", &dx, &dy);

        for (i = 0; i < k; i++) {
            scanf("%d %d", &rx, &ry);
            if ((rx == dx) || (ry == dy)) {
                printf("divisa\n");
            } else if ((rx > dx) && (ry > dy)) {
                printf("NE\n");
            } else if ((rx < dx) && (ry > dy)) {
                printf("NO\n");
            } else if ((rx < dx) && (ry < dy)) {
                printf("SO\n");
            } else if ((rx > dx) && (ry < dy)) {
                printf("SE\n");
            }
        }
    }
}
