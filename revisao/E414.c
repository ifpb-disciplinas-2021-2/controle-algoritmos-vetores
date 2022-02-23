/* 
E414. Escreva um programa em linguagem C que armazena uma matriz (2x4) e, em seguida,
leia um número, calcule o produto do número pela matriz e armazene em uma segunda
matriz. Por fim, a segunda matriz deve ser impressa.

ENTRADA: 1 2 3 4 5 6 7 8
         2
SAIDA :  2  4  6  8
         10 12 14 16
*/
#include <stdio.h>
#define LINHAS 2
#define COLUNAS 4
int main(){
    // i: 1 2 3 4 
    // j: 5 6 7 8
    int numeros[LINHAS][COLUNAS];
    int resposta[LINHAS][COLUNAS];
    int numero;
    //preenchendo a matriz
    for(int i=0; i < LINHAS; i++){
        for(int j=0; j < COLUNAS; j++){
            printf("Digite um número: ");
            scanf("%d", &numeros[i][j]);
        }
    }
    // lendo o número multiplicador
    printf("Digite o número a ser multiplicado: ");
    scanf("%d", &numero);
    //calculando o produto da matriz pelo número
    for(int i=0; i < LINHAS; i++){
        for(int j=0; j < COLUNAS; j++){
            resposta[i][j] = numero * numeros[i][j];
        }
    }
    //impressão da matriz resultante
    for(int i=0; i < LINHAS; i++){
        for(int j=0; j < COLUNAS; j++){
            printf("%d ", resposta[i][j]);
        }
        printf("\n");
    }
    return 0;
}