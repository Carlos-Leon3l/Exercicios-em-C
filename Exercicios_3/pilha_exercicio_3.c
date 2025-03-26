#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "pilha.h" 

int main() {
    Pilha A = pilha(100); 
    char str[100];   
    int n = 100;
    char *letter_str;

    printf("Digite uma frase ");
    fgets(str, sizeof(str), stdin);
    str[strcspn(str, "\n")] = '\0';
    
    
    letter_str = strtok(str, " ");
    while (letter_str != NULL) {    	
    	for (int i = 0; letter_str[i] != '\0'; i++) {
    		empilha(letter_str[i] ,A);
       }
		while (!vaziap(A)) {
		    printf("%c", desempilha(A));	
		}	
        printf(" ");  
        letter_str = strtok(NULL, " ");  
    }
    return 0;
}

