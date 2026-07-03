#include <stdio.h>

int main()
{
    int cont = 0; 
    while (cont < 50){
        int valor;
        printf("Digite um valor: ");
        scanf ("%d", &valor);
        cont++;
    }

    return 0;
}
