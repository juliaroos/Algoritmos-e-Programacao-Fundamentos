#include <stdio.h>

int main() {
    
    double numeros[100];
    int i;
    
    printf("Digite 100 números: ");
    for(i = 0; i < 100; i++) {
        scanf("%lf", &numeros[i]);
    }
    
    printf("Números na ordem inversa: ");
    for(i = 99; i >= 0; i--) {
        printf("%.2lf ", numeros[i]);
    }

    return 0;
}
