#include <stdio.h>

int main()
{
    int i, j;
    int matriz[3][3];

    printf("Entrada de valores para a matriz: \n");

    for (i = 0; i < 3; i++){
        for (j = 0; j < 3; j++){
            printf("Indice - [%d][%d] :", i, j);
            scanf("%d", &matriz[i][j]);
        }
    }

    printf("\nMatriz:\n");
    for (i = 0; i < 3; i++){
        for (j = 0; j < 3; j++){
            printf("%d\t", matriz[i][j]);
        }
        printf("\n");
    }

    return 0;
}
