#include <stdio.h>
#include <stdlib.h>

int main() {
    int x = 10;
    int *p;

    p = &x;
    
    printf("X = %d\n", x);
    printf("&X = %d\n", &x);
    printf("p = %d\n", p);

    return 0;
}