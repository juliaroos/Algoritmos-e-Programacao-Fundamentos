#include <stdio.h>
#include <math.h>


int main()
{
       int numP = 0, soma = 0, cont = 1;
       
       printf ("Escreva números positivos, e quando desejar o resultado da média deles, digite um número negativo: ");
       scanf ("%d", &numP);
       
       for (; numP >= 0; scanf("%d", &numP)) {
            soma += numP;
             cont++;
       }
       
       int media = soma / cont;
       
       printf ("A média dos números positivos é de: %d", media);
    return 0;
}
