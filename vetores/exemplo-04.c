// O que esse algoritmos faz?
#include <stdio.h>
int main(){
   int idades[10] = {18, 17, 25, 32, 28, 22, 19};

   for(int i=0; i<10;i++){
       printf("%d -> %d\n",i,  idades[i]);
   }

   printf("%d\n", idades[0]);
   return 0; 
}