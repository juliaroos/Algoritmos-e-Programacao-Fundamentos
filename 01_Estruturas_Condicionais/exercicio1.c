#include <stdio.h>
#include <math.h>

int main()
{
    int A;
    printf("Insira um número inteiro e falarei se o número é par ou impar:");
    scanf ("%d", &A);
    
    if (A % 2 == 0)
    printf("Valor %d é par\n", A);
    else
    printf("Valor %d é ímpar\n", A);

    return 0;
}
