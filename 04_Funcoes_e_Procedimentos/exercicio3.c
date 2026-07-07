#include <stdio.h>

int primo(int valor) {
    if (valor <= 1)
    return 0;
    for(int i=2; i<valor; i++)
        if(valor % i == 0){
            return 0;
        }
    return 1; 
}   

        
int main (){
    int num; 
        printf("Informe um valor: ");
        scanf("%d", &num);
    int ehPrimo = primo(num); 
        
        
    if(ehPrimo) 
    printf("%d é primo!\n", num);
    else 
    printf("%d não é primo!\n", num);
        return 0; 
}
