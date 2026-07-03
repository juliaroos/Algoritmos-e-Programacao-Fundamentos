#include <stdio.h>

int main()
{
    int cont = 0, soma = 0, num; 
    while (cont < 10){
        printf ("Escreva um número inteiro: ");
        scanf ("%d", &num);
        soma += num;
        cont++;
    }
    
    printf("A soma total dos números é de: %d", soma);


    return 0;
}
