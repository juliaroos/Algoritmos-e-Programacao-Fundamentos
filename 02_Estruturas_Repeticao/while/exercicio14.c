#include <stdio.h>
#include <math.h>


int main()
{
       int num, divisor = 2;
       
       printf ("Digite um número inteiro: ");
       scanf ("%d", &num);
       
       if (num < 2) 
       printf("%d nao é primo.\n", num);
       
       while (divisor < num && num % divisor != 0)
           divisor++;
       
         if (divisor == num) {
        printf("%d é primo!\n", num);
    } else {
        printf("%d nao é primo.\n", num);
    }
       
    return 0;
}
