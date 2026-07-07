#include <stdio.h>

int main()
{   
    
    double num[5]; 
    printf("Escreva 5 números reais: ");
    
    for (int i = 0; i < 5; i++)
    scanf("%lf", &num[i]);
    
    double soma = 0.0;
    for (int i = 0; i < 5; i++){
        soma = soma + num [i];
    }
    
    double media = soma/5; 
    
    printf("A média dos números é de: %.2f", media);

    return 0;
}
