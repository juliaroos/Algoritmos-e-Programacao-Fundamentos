/* Matriz Transposta: Escreva um programa que leia uma matriz 3x3. 
Gere e imprima a matriz transposta (onde as linhas da original se tornam as colunas da nova matriz).*/

#include <stdio.h>

int main()
{   
    
    int num[3][3]; 
    
    printf("Escreva 9 números inteiros: ");
    
    for (int i = 0; i < 3; i++){
        for (int j = 0; j < 3; j++){
            scanf("%d", &num[i][j]);
        }
    }
    
    
    for (int j = 0; j < 3; j++){
        for (int i = 0; i < 3; i++){
            printf("%d ", num[i][j]);
        }
        printf("\n");
    }
    

    return 0;
}
