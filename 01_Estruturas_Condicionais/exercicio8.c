#include <stdio.h>
#include <math.h>

int main()
{
    double a, b, nota;
    printf("Insira sua nota do Grau A e sua nota do Grau B: ");
    scanf ("%lf %lf", &a, &b); 
    
    if (a < 0 || b < 0)
        printf ("ERRO: valor da nota inválido.");
    
    nota = (a + (2 * b)) / 3;
    
    if (nota >= 6 ) 
        printf ("Você não precisa de Grau C!!!\n Sua nota final é de %.1f", nota); 
    else 
        printf ("Você precisa de Grau C! :( \n Sua nota no momento é de %.1f", nota); 
    
    return 0;
}
