/*
E415. Escreva um programa em linguagem C que leia uma matriz quadrada de ordem 4 de
números inteiros e um número inteiro N, calcule e imprima a quantidade de vezes o
número N aparece dentro da matriz.

ENTRADA: 1 2 3 4 
         1 2 3 4 
         1 2 3 4 
         5 6 7 8
         4
SAÍDA:   3 vezes       
*/
#include <stdio.h>
#define LINHAS 4
#define COLUNAS 4
int main(){
    int valores[LINHAS][COLUNAS];
    int n;
    int contador = 0;
    for(int i=0; i < LINHAS; i++){
        for(int j=0; j < COLUNAS; j++){
            printf("Digite um número: ");
            scanf("%d", &valores[i][j]);
        }
    }
    printf("Digite o valor de N: ");
    scanf("%d", &n);
    for(int i=0; i < LINHAS; i++){
        for(int j=0; j < COLUNAS; j++){
            if(n == valores[i][j]){
                contador++; //contador +=1 // contador = contador + 1
            }
        }
    }
    printf("%d vez(es)\n", contador);
    return 0;
}