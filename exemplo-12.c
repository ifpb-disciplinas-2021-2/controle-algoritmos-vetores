 #include <stdio.h>
 #define LINHAS 2
 #define COLUNAS 10
 int main(){
     int matriz[LINHAS][COLUNAS];
    // atribuição de três posições
    scanf("%d", &matriz[1][3]);
    scanf("%d", &matriz[0][0]);
    scanf("%d", &matriz[1][7]);
    //percorrendo a matriz
    for(int i=0; i<LINHAS; i++){
         for(int j=0; j<COLUNAS;j++){
             printf("%d \t", matriz[i][j]);
         }
         printf("\n");
    }
    return 0;
 }
 