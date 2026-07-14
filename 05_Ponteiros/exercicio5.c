#include <stdio.h>

void soma(int *a, int tamanho){
    
    int soma = 0;
    for (int i = 0; i < tamanho; i++){
        soma = soma + *a ;
        a++;
    }
    printf("A soma dos números é de: %d", soma);
    
}


int main()
{
    int num[] = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9};
    int tamanho = sizeof(num) / sizeof(num[0]);
    
    soma(num, tamanho);

    return 0;
}
