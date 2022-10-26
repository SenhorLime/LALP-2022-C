#include <stdio.h>
/*
  Aluno: João Vitor Lima Zeferino - INFO 1
  Data: 19/10/2022
  Objetivo: Ler duas matrizes 3x3 e depois a soma das mesmas
*/
int main() {
  int i, j;                    // Declaracao das variaveis de controle
  int mat1[3][3], mat2[3][3]; // Declara das matrizes

  // Prenchimento das matrizes pelo usuario
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
  // Fim do prenchimento das matrizes

  // Exibicao dos valores armazenados nas matrizes
  printf("\nA primeira matriz e \n");
  for (i = 0; i < 3; i++){
    for (j = 0; j < 3; j++){
      printf("%d\t", mat1[i][j]);
    }
    printf("\n");
  }

  printf("\nA segunda matriz e \n");
  for (i = 0; i < 3; i++){
    for (j = 0; j < 3; j++){
      printf("%d\t", mat2[i][j]);
    }
    printf("\n");
  }
  // Fim da exibicao

  // Exibicao da soma das duas matrizes
  printf("\nA soma das matrizes e \n");
  for (i = 0; i < 3; i++){
    for (j = 0; j < 3; j++){
      printf("%d\t", mat1[i][j] + mat2[i][j]);
    }
    printf("\n");
  }

  return 0;
}
