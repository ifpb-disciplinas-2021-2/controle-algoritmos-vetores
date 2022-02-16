#include <stdio.h>
int main(){
    
   int pessoas[2][10] = {
            {101, 802, 234, 198, 001, 125, 500, 200, 345, 547}, //número de inscrição
            {18, 17, 25, 32, 28, 22, 19, 23, 27, 42} //idades
    };
   // imprimindo a matriz
   for(int i=0;i<2;i++){
       for(int j=0;j<10; j++){
        printf ("%d \t", pessoas[i][j]);
       }
       printf("\n");
    }
    return 0; 
}