/*
Escreva um programa em linguagem C que leia um vetor de dez números inteiros e, após
terminar a leitura, leia um número inteiro N e imprima todos os elementos do vetor que
são maiores que N.

ENTRADA: 1 2 3 4 5 6 7 8 9 10
         5
SAIDA:   6 7 8 9 10        
*/
#include <stdio.h>
#define TAMANHO 20
int main(){
    int numeros[TAMANHO];
    int n;
    //1 2 3 4 5 6 7 8 9 10
    for(int indice = 0; indice < TAMANHO; indice = indice + 1){
        // printf("Digite um número: ");
        scanf("%d", &numeros[indice]); // 
    }
    // printf("Digite o valor do N: ");
    scanf("%d", &n);
    for(int indice = 0; indice < TAMANHO; indice = indice + 1){
        if(numeros[indice] > n){
            printf("%d ", numeros[indice]);
        }
    }
    printf("\n");
    return 0;
}