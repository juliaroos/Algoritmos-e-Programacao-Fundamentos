/* Busca de Elemento: Escreva um programa que leia um array de 10 números inteiros.
Depois, leia mais um número inteiro X. O programa deve buscar o número X no array e, 
ao final, imprimir o índice (posição) em que X foi encontrado ou uma mensagem "Não encontrado". */


#include <stdio.h>

int main()
{   
    
    int num[10], X; 
    
    printf("Escreva 10 números inteiros: ");
    
    for (int i = 0; i < 10; i++)
    scanf("%d", &num[i]);
    
    printf("Escreva o número que você deseja procurar: ");
    scanf("%d", &X);
    
    int encontrou = 0;
    
    for (int i = 0; i < 10; i++){
        if (num[i] == X){
            printf("O valor %d está na posição %d.", X, i);
            encontrou = 1;
            break;
        }
    }
    
    if (encontrou == 0)
    printf("O valor %d não foi encontrado.", X);

    return 0;
}
