#include <stdio.h>
#include <math.h>


int main()
{
       int num1, num2; 
       int menor, maior;
       
       printf ("Digite dois números inteiros: ");
       scanf ("%d %d", &num1, &num2);
       
       if (num1 < 0 || num2 < 0) {
       printf("ERRO: Um dos numeros é negativo. \n");
       return 0;
    }
    
       if (num1 < num2) {
       menor = num1;
       maior = num2;
    }  else {
       menor = num2;
       maior = num1;
    }
       
       printf ("Os números pares entre %d e %d são: \n", menor, maior);
              
       if (menor % 2 != 0)
       menor++;
    
       for (; menor < maior;  menor += 2){
       printf("%d \n", menor);
      
    }

    return 0;
}
