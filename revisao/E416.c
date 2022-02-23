/*
E416. Escreva um programa em linguagem C que leia uma matriz (3x4) e, em seguida, leia um
número (n), calcule e imprima a soma dos elementos da n-ésnima coluna (coluna com índice igual a n).

ENTRADA
    1 2 3 4
    1 2 3 4
    1 2 3 4
    2
SAIDA
    9
*/
#include <stdio.h>
#define LINHAS 3
#define COLUNAS 4
int main(){
    int numeros[LINHAS][COLUNAS];
    int n;
    int soma = 0;
    for(int i=0; i < LINHAS; i++){
        for(int j=0; j < COLUNAS; j++){
            printf("Digite um número: ");
            scanf("%d", &numeros[i][j]);
        }
    }
    printf("Digite o número N: ");
    scanf("%d", &n);
    for(int i=0; i < LINHAS; i++){
        for(int j=0; j < COLUNAS; j++){
            if(n == j){
                soma = soma + numeros[i][j];
            }
        }
    }
    printf("Soma: %d\n", soma);
    return 0;
}