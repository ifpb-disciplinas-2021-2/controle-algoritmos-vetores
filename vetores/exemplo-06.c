/*
Escreva um programa em linguagem C que leia dez números inteiros
 e, após finalizar a leitura, imprima todos os números lidos 
 na ordem inversa em que eles foram digitados

 original = 2 31 4 5 6 6 7 8 9 10
 inversa  = 10 9 8 7 6 5 4 31 2
*/
#include <stdio.h>
#define TAM 5
int main(){
    int numeros[TAM];
    for(int indice=0; indice < TAM; indice++){
        printf("Digite um número: ");
        scanf("%d", &numeros[indice]);
    }
    for(int indice = TAM - 1; indice >= 0 ;indice--){
        printf("%d ", numeros[indice]); //numeros[10]
    }
    return 0; 
}