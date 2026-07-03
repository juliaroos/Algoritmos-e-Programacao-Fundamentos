
#include <stdio.h>
#include <math.h>

int main()
{
    float A;
    printf("Insira o valor do produto: ");
    scanf ("%f", &A);
    
    if (A <= 0)
    printf ("Preço inválido");
    else if (A > 0 && A < 30)
    printf ("Preço baixo");
    else if (A > 30 && A < 50)
    printf ("Preço baixo");
    else 
    printf ("Valor alto"); 
    
    return 0;
}
