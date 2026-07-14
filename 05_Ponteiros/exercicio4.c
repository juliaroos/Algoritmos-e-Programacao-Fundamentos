#include <stdio.h>

int main()
{
    int num[] = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9};
    int *pi = num;
    int tamanho = sizeof(num) / sizeof(num[0]);
    
    
     for (int i = 0; i < tamanho; i++) {
        printf("Valor: %d\n", *(pi + i)); 
    }

    return 0;
}
