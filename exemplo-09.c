 #include <stdio.h>
 #define LINHAS 2
 #define COLUNAS 10
 int main(){
     int matriz[LINHAS][COLUNAS] = {
         {1, 2, 3, 4, 5, 6},
         {1, 2, 3, 4, 5, 6, 7, 8, 9, 10}
     };

     for(int i=0; i<LINHAS; i++){
         for(int j=0; j<COLUNAS;j++){
             printf("%d \t", matriz[i][j]);
         }
         printf("\n");
     }

     return 0;
 }
 