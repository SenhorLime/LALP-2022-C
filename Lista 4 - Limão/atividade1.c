#include <stdio.h>
#include <stdlib.h>

int main() {
    int x = 3, y = 5, z = 0;
    z = y * z;

    int *p;

    printf("Varivel X: %d\n", x);
    printf("Variavel Y: %d\n", y);
    printf("Variavel Z: %d\n", z);

    printf("Variavel P: %d\n", p);
    printf("Ponteiro P: %d\n", *p);

    return 0;
}