#include <stdio.h>
#include <stdlib.h>
/*
  Aluno: João Vitor Lima Zeferino - INFO 1
  Data: 26/10/2022
  Objetivo: O programa identifica se a matriz dada e identidade ou nao  
*/
int main() {
  int i, j; // Declaracao das variaveis de controle
  int mat[3][3]; // Declaracao da matriz

  // Prenchimento da matriz
  printf("Digite os valores para a matriz (Entre 1 e 0): \n");
  for (i=0; i<3; i++){
    for (j=0; j<3; j++){
      printf("Posicao na Matriz [%d][%d] - ", i, j);
      scanf("%d", &mat[i][j]);
    }
  }


  // Exibicao da matriz
  printf("\n-- A matriz e --\n");
  for (i = 0; i < 3; i++){
    for (j = 0; j < 3; j++){
      printf("%d\t", mat[i][j]);
    }
    printf("\n");
  }


  // Verifica e exibibe se matriz e identidade ou nao
  if (mat[0][0] == 1 && mat[1][1] == 1 && mat[2][2] == 1) {
    printf("Essa matriz e uma Matriz Identidade\n");
  }else {
    printf("Essa matriz nao e uma Matriz Identidade\n");
  }

  return 0;
}
