#include <stdio.h>

int main(){
    int i, j;
    float matriz[2][2];

    for(i=0; i<2; i++){
        for(j=0; j<2; j++){
            printf("Digite a matriz [%d][%d] = ", i, j);
            scanf("%.4f", &matriz[i][j]);
        }
    }

    for(i=0; i<2; i++){
        for(j=0; j<2; j++){
            printf("%.5f", matriz[i][j]);
        }
    }

    return 0;
}