#include <stdio.h>

void conta(int *num, int tamanho){
    int neg=0;
    for (int i=0; i < tamanho; i++){
        if (num[i] < 0){
            neg++;
        }
    }
    printf("%d", neg);
    
}


int main() {
    
    int num[] = {1, -9, 7, -30, 5}, tamanho = sizeof(num)/sizeof(num[0]);
    
    conta(num, tamanho);

    return 0;
}
