#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define tam 100
int main(){
    int i, j;

    /*
    int main(void) {
	char buffer[] = "Hello";
	size_t size = strlen(buffer);
	for(int i = 0; i < size / 2; i++) {
	   char tmp = buffer[i]; //armazena o character inicial
	   buffer[i] = buffer[size - i - 1]; //Troca o character da ponta oposta
	   buffer[size - i - 1] = tmp; //Armazena o character inicial no buffer
	}
	printf("%s", buffer);
}
    */
    
    char word[tam], wordcpy[tam];

    printf("Digite uma palavra: ");
    fgets(word, 100, stdin);

    int size = strlen(word);

    for(i=0; i<size; i++){
        char tmp = word[i];
        wordcpy[i] = word[size - i - 1];
        word[size - i - 1] = tmp;
    }

    printf("String inversa: %s", wordcpy[tam]);

    return 0;
}