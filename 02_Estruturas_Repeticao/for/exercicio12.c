#include <stdio.h>

int main()
{
    int cont, soma = 0, num; 
    for (cont = 0; cont < 10; cont++){
        printf ("Escreva um número inteiro: ");
        scanf ("%d", &num);
        soma += num;
    }
    
    printf("A soma total dos números é de: %d", soma);


    return 0;
}
