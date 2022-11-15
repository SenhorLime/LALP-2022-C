#include <stdio.h>

int change(int n1, int n2) {
    int temp;
    
    temp = n1;
    n1 = n2;
    n2 = temp;
}

int main() {
    int num1 = 5;
    int num2 = 10;
    
    printf("\nImprimindo os numeros ANTES de chamar a funcao \n");
    printf("num1 = %d \n", num1);
    printf("num2 = %d \n", num2);

    change(&num1, &num2);

    printf("\nImprimindo os numeros DEPOIS de chamar a funcao \n");
    printf("num1 = %d\n", num1);
    printf("num2 = %d\n", num2);

    return 0;
}