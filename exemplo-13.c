 #include <stdio.h>
 #include <stdlib.h>
 #include <time.h>
 #define LINHAS 2
 #define COLUNAS 10
 int main(){
     srand(time(NULL)); 
     int matriz[LINHAS][COLUNAS];
    // atribuição de todas as posições
    for(int i=0; i<LINHAS; i++){
         for(int j=0; j<COLUNAS;j++){
             matriz[i][j] = rand() % 100;
         }
    }
    //percorrendo a matriz
    for(int i=0; i<LINHAS; i++){
         for(int j=0; j<COLUNAS;j++){
             printf("%d \t", matriz[i][j]);
         }
         printf("\n");
    }
    return 0;
 }
 