#include <stdio.h>

int functionNumbers(int *a, int *b, int *c){
    *a = (*b) + 1;
    *b = (*c) + 2;
    c = (*a) * (*b);
}

int main(){
    int d = 1;
    int e = 2;
    int f = 5;
    
    printf("Imprime numeros: %d %d %d \n", d, e, f);
    
    functionNumbers(&d, &e, &f);
    printf("Imprime numeros: %d %d %d \n", d, e, f);
    
    return 0;
}