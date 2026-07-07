#include <stdio.h>

void ImprimirAteX (int x){ 
    for (int i = 1; i <= x; i++) {
        printf ("%d ", i);
    }
    
    printf ("\n");
}

int main (){
    int numero;
    printf ("Digite um número inteiro: ");
    scanf ("%d", &numero);
    
    ImprimirAteX(numero); 
    
    return 0;
}
