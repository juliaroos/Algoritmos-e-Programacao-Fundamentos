#include <stdio.h>

int main()
{
    int numA = 0, cont = 0; 
    while (cont < 10){
        char letra;
        printf ("Escreva uma letra: ");
        scanf (" %c", &letra);
        if (letra == 'A' || letra == 'a')
        numA++;
        cont++;
    }
    
    printf("\n Quantidade de A/a: %d\n", numA);

    return 0;
}
