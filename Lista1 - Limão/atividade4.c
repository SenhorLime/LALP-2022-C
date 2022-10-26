#include <stdio.h>
/*
  Aluno: João Vitor Lima Zeferino - INFO 1
  Data: 22/10/2022
  Objetivo: Modificar o codigo da atividade 3 para que o usuario digite o tamanho das matrizes e que no final mostre a subtracao das mesmas
*/
int main(){
  // Declaracao das variaveis de controle
  int i, j, size;

  // Pede ao usuario um valor para determinar o tamanho da matriz
  printf("Digite o tamanho das matrizes: ");
  scanf("%d", &size);

  // Declarao das matrizes
  int mat1[size][size], mat2[size][size];

  // Prenchimento das matrizes
  printf("Digite os valores para a primeira matriz: \n");
  for (i = 0; i < size; i++){
    for (j = 0; j < size; j++){
      printf("Primeira Matriz [%d][%d] - ", i, j);
      scanf("%d", &mat1[i][j]);
    }
  }

  printf("Digite os valores para a segunda matriz: \n");
  for (i = 0; i < size; i++){
    for (j = 0; j < size; j++){
      printf("Segunda Matriz [%d][%d] - ", i, j);
      scanf("%d", &mat2[i][j]);
    }
  }
  // Fim do prenchimento

  // Exibicao dos valores armazenados nas matrizes
  printf("\nA primeira matriz e \n");
  for (i = 0; i < size; i++){
    for (j = 0; j < size; j++){
      printf("%d\t", mat1[i][j]);
    }
    printf("\n");
  }

  printf("\nA segunda matriz e \n");
  for (i = 0; i < size; i++){
    for (j = 0; j < size; j++){
      printf("%d\t", mat2[i][j]);
    }
    printf("\n");
  }
  // Fim da exibicao

  // Exibicao da subtracao das matrizes
  printf("\nA subtracao das matrizes e \n");
  for (i = 0; i < size; i++){
    for (j = 0; j < size; j++){
      printf("%d\t", mat1[i][j] - mat2[i][j]);
    }
    printf("\n");
  }

  return 0;
}
