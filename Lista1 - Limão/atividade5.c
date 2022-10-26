#include <stdio.h>
#include <stdlib.h>
/*
  Aluno: João Vitor Lima Zeferino - INFO 1
  Data: 24/10/2022
  Objetivo: Calcular e exibir a matriz resultante de uma matriz 2x2
*/
int main() {
  int i, j; // Declaracao das variaveis de controle
  int mat[2][2]; // Declaracao da matriz

  // Prenchimento da matriz
  printf("Digite os valores para a matriz: \n");
  for (i=0; i<2; i++){
    for (j=0; j<2; j++){
      printf("Posicao na Matriz [%d][%d] - ", i, j);
      scanf("%d", &mat[i][j]);
    }
  }

  // Exibe o valor da matriz resultante
  printf("\n--- Matriz resultante: ---\n");
  for (i=0; i<2; i++){
    for (j=0; j<2; j++){
      printf("%d\t", mat[i][j]*2);
    }
    printf("\n");
  }

  return 0;
}
