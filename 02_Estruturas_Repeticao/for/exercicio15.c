#include <stdio.h>
#include <math.h>


int main(){

    int soma = 0;
    int num = 0;

    for (num = 0; num <= 198; num += 1) {
        soma = soma + num;
    }

    printf("A soma dos valores de 0 ate 198 eh: %d\n", soma);

    return 0;
}
