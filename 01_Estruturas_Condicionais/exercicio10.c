#include <stdio.h>
#include <math.h>

int main()
{
    double preço, quantidade, total;
    printf("Insira o preço do produto: ");
    scanf ("%lf", &preço); 
    printf("Insira a quantidade de produtos: ");
    scanf ("%lf", &quantidade); 
    
    if (preço > 0 || quantidade > 0) {
        total = preço * quantidade;
        (printf ("O valor total será de R$%.2f", total));
    }
    else 
    printf ("ERRO: O valor inserido é inválido.");
    
    return 0;
}
