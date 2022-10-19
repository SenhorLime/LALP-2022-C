#include <stdio.h>

int main()
{
    int i, j, cont, mat1[3][3], mat2[3][3];

    printf("Digite os valores para a primeira matriz: \n");
    for (i = 0; i < 3; i++){
        for (j = 0; j < 3; j++){
            printf("Primeira Matriz [%d][%d] - ", i, j);
            scanf("%d", &mat1[i][j]);
        }
    }

    printf("Digite os valores para a segunda matriz: \n");
    for (i = 0; i < 3; i++){
        for (j = 0; j < 3; j++){
            printf("Segunda Matriz [%d][%d] - ", i, j);
            scanf("%d", &mat2[i][j]);
        }
    }

    for (cont = 0; cont < 3; cont++){
        if (cont == 0){
            printf("\nA primeira matriz e \n");
            for (i = 0; i < 3; i++){
                for (j = 0; j < 3; j++){
                    printf("%d\t", mat1[i][j]);
                }
                printf("\n");
            }
        }else if (cont == 1){
            printf("\nA segunda matriz e \n");
            for (i = 0; i < 3; i++){
                for (j = 0; j < 3; j++){
                    printf("%d\t", mat2[i][j]);
                }
                printf("\n");
            }
        }else if (cont == 2){
            printf("\nA soma das matrizes e \n");
            for (i = 0; i < 3; i++){
                for (j = 0; j < 3; j++){
                    printf("%d\t", mat1[i][j] + mat2[i][j]);
                }
                printf("\n");
            }
        }
    }
}