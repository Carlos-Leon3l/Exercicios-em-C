#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "pilha.h" 

int main() {
    Pilha A = pilha(100); 
    Pilha B = pilha(100);
    Pilha C = pilha(100);
    char entrada[10];   
    int numero;
    int temp;
    int x;

    while (1) { 
        printf("Digite um numero (ou digite 'N' para parar): ");
        scanf("%s", entrada);

       
        if (strcmp(entrada, "N") == 0 || strcmp(entrada, "n") == 0) {
            break;
        }

        
        numero = atoi(entrada);
        if (numero == 0 && entrada[0] != '0') {
            printf("Entrada invalida! Digite um numero ou 'N' para parar.\n");
        } else {
            empilha(numero, A); 
        }
    }
    
    printf("Sua pilha na ordem de entrada \n");
    while(!vaziap(A)) {
	int mostrar_pilha =desempilha(A);
	empilha(mostrar_pilha, C);
	printf("%d\n", mostrar_pilha);
	}
	
    while(!vaziap(C)) {
    	empilha(desempilha(C), A);
	}
	destroip(&C);

    

    while (!vaziap(A)) {
    	temp = topo(A);
    	desempilha(A);
	    while (!vaziap(B) && topo(B) > temp)  {
	    	empilha(desempilha(B), A);
	  
		}
		empilha(temp, B);
	}
	while(!vaziap(B)) {
		empilha(desempilha(B), A);
	}
	
	printf("\n");
	printf("Sua pilha ordenada e: \n");
	while (!vaziap(A)) {
    x = desempilha(A);
    printf("%d\n", x);
	}
}
