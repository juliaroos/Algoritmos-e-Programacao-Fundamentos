/* Palavra Invertida: Escreva um programa que leia uma palavra. 
Em seguida, imprima esta palavra de trás para frente, caractere por caractere.*/

#include <stdio.h>
#include <string.h>

int main()
{   
    
    char palavra[100]; 
    
    printf("Escreva uma palavra: ");
    fgets(palavra, 100, stdin);
    
    size_t tamanho = strlen(palavra);
    
    
    for (int i = tamanho; i >= 0; i--)
    printf("%c", palavra[i]);
    

    return 0;
}
