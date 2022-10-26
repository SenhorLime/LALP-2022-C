#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define tam  500

int main(){
	char frase[tam];
	
    printf("Digite uma frase: ");
    fgets(frase, 500, stdin);

    printf("O tamanho do vetor e: %d\n", strlen(frase));
    printf("A string maiscula e: %s", strupr(frase));
    printf("A string minuscula e: %s", strlwr(frase));

    return 0;
}