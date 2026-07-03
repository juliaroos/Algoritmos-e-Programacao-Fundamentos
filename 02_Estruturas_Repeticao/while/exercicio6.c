#include <stdio.h>

int main()
{
       int cont = 0; 
    while (cont < 20){
        double valor;
        printf("Digite um valor: ");
        scanf ("%lf", &valor);
        cont++;
    }

    return 0;
}
