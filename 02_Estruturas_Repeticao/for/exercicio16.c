#include <stdio.h>
#include <math.h>


int main()
{
       int num1, num2; 
       int menor, maior;
       int somap = 0, somai = 0;
       
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

      
       
    for (int numeroAtual = menor + 1; numeroAtual < maior; numeroAtual++) {
    if (numeroAtual % 2 == 0) {
        somap += numeroAtual;
    } else {
        somai += numeroAtual;
    }
    ;
}
    
       printf ("A soma dos números pares entre %d e %d é: %d\n", menor, maior, somap);
       printf ("A soma dos números impares entre %d e %d é: %d\n", menor, maior, somai);

    return 0;
}
