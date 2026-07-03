#include <stdio.h>
#include <math.h>
#include <stdlib.h>

int main()
{
    int a, b, c;
    printf ("Insira 3 valores inteiros para formar um triângulo: ");
    scanf ("%d %d %d", &a, &b, &c);
    
    if ((abs(b - c) < a && a < b + c) &&
       (abs(a - c) < b && b < a + c) &&
       (abs(a - b) < c && c < a + b)) {
        
       if (a == b && b  == c)
       printf ("TRIANGULO EQUILÁTERO");
       else if (a == b || a == c || b == c)
       printf ("TRIANGULO ISÓCELES");
       else
       printf ("TRIANGULO ESCALENO");
       }
    else {
    printf ("NÃO FORMA UM TRIÂNGULO");
    }
    return 0;
}

