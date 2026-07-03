
#include <stdio.h>
#include <math.h>

int main()
{
    int A;
    printf("Insira um ano para descobrir se é bissexto: ");
    scanf ("%d", &A);
    
    if (A <= 0)
    printf ("Valor inválido");
    
    else {
    
    if ((A % 4 == 0 && A % 100 != 0) || (A % 400 == 0))
       printf ("O ano de %d é bissexto", A);
    else 
       printf ("O ano de %d não é bissexto", A);
       
    }
    
    return 0;
    
}
