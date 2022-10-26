#include <stdio.h>
/*
  Aluno: João Vitor Lima Zeferino - INFO 1
  Data: 19/10/2022
  Objetivo: Corrigir o codigo para que ele funcione da maneira esperada
*/
int main(){
  // Declaracao de variaveis
  int i, j;
  float matriz[2][2];

  // Prenchimento da matriz
  for(i=0; i<2; i++){
    for(j=0; j<2; j++){
      printf("Digite a matriz [%d][%d] = ", i, j);
      scanf("%.4f", &matriz[i][j]);
    }
  }

  // Exibicao da matriz
  for(i=0; i<2; i++){
    for(j=0; j<2; j++){
      printf("%.5f", matriz[i][j]);
    }
  }

  return 0;
}
