#include <stdio.h>
int main(){
    // int idades = | 12 | 22 | 18 | 9 | 45 | 
    int idades[5]; //declarando o vetor
    // int idade;
    
    // idades[0] = 12;
    // idades[1] = 22;
    // idades[2] = 18;
    // idades[3] = 9;
    // idades[4] = 45;

    for(int i=0; i<5; i++){
        printf("Digite a idade: ");
        scanf("%d", &idades[i]); //atribuindo valores às posições do vetor
    }
    return 0;
}