#include <stdio.h>

void point(int *x, int *y) {
    *x = (*y) * 5;
}

int main() {
    int a = 27;
    int b = 5;
    
    point(&a, &b);
    printf("O valor que saira na funcao e: %d", a);
    
    return 0;
}