#include <stdio.h>
#include <stdlib.h>

int main() {
  int i, j, number;
  int player1=0, player2=0;
  int cartela1[4][4], cartela2[4][4];

  for(i=0; i<4; i++){
    for(j=0; j<4; j++){
      cartela1[i][j] = rand() % 60;
      cartela2[i][j] = rand() % 60;
    }
  }

  printf("\nJogador 1: \n");
  for(i=0; i<4; i++){
    for(j=0; j<4; j++){
      printf("%d\t", cartela1[i][j]);
    }
    printf("\n");
  }

  printf("\nJogador 2: \n");
  for(i=0; i<4; i++){
    for(j=0; j<4; j++){
      printf("%d\t", cartela2[i][j]);
    }
    printf("\n");
  }

  printf("O numero sorteado foi:  ");
  while(player1<=16 || player2<=16){
    number = rand() % 60;

    for(i=0; i<4; i++){
      for(j=0; j<4; j++){
        if (cartela1[i][j] == number) {
          player1++;
        }
      }
    }

    for(i=0; i<4; i++){
      for(j=0; j<4; j++){
        if (cartela2[i][j] == number) {
          player2++;
        }
      }
    }
    printf("%d ", number)
  }

  if (player1 == 16){
    printf("\nO vencendor foi o jogador 1");
  }
  if (player2 == 16) {
    printf("\nO vencedor foi o jogador 2");
  }

  return 0;
}
