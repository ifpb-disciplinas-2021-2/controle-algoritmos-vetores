/*
Escreva um programa em linguagem C que preencha um vetor com cinco posições 
e, em seguida, exiba apenas os números pares existentes no vetor
*/
#include <stdio.h>
#define TAM 5
int main(){
    int numeros[TAM] = {12, 13, 15, 18, 19};

    for(int i=0; i < TAM; i++){
        int valor = numeros[i];
        if(valor % 2 == 0) //numero é par
                printf("%d \n", valor);
    }
    
    return 0; 
}