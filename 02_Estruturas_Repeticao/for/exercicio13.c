#include <stdio.h>

int main()
{
       int quant, cont; 
       printf ("Quantos números você irá digitar? ");
       scanf ("%d", &quant);
    for (cont = 0; cont < quant; cont++){
        int num;
        printf("\n Digite um número: ");
        scanf ("%d", &num);
            if (num == 0)
            printf ("\n O número %d é igual a zero \n", num);
            else if (num > 0)
            printf ("\n O número %d é positivo \n", num);
            else 
            printf ("\n O número %d é negativo \n", num); 
    }

    return 0;
}
