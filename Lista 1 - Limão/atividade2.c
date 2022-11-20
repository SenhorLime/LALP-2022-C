#include <stdio.h>
/*
  Aluno: João Vitor Lima Zeferino - INFO 1
  Data: 19/10/2022
  Objetivo: Ler os valores de uma matriz 3x3 e depois exibir o resultado da maneira desejada
*/
int main(){
  // Declaracao das variaveis
  int i, j;
  int matriz[3][3];

  // Prenchimento da matriz
  printf("Entrada de valores para a matriz: \n");
  for (i = 0; i < 3; i++){
    for (j = 0; j < 3; j++){
      printf("Indice - [%d][%d] :", i, j);
      scanf("%d", &matriz[i][j]);
    }
  }

  // Exibicao da matriz
  printf("\nMatriz:\n");
  for (i = 0; i < 3; i++){
    for (j = 0; j < 3; j++){
      printf("%d\t", matriz[i][j]);
    }
    printf("\n");
  }

  return 0;
}
