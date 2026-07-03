#include <stdio.h>
#include <math.h>

int main()
{
    float A, juros;
    printf("Insira o valor do produto: ");
    scanf ("%f", &A);
    
    if (A <= 0)
    printf ("Valor inválido");
    
    else {
    
    if (A < 100)
       juros = A * (10.0 / 100);
    
    else if (A >= 100 && A < 300)
       juros = A * (20.0 / 100);
    
    else if (A >= 300)
       juros = A * (50.0 / 100);
       
    }
       
   
    float total = A + juros;
    printf ("O valor com juros é de: %2.f reais", total);
    
    return 0;
}
