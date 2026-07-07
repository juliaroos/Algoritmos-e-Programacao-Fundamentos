#include <stdio.h> 

void caulculaTabuada (int x){
    printf ("Tabuáda do número %d: \n", x); 
    for (int vezes = 0; vezes <= 10; vezes++) {
        int mult = x * vezes; 
        printf ("%d X %d = %d \n", x, vezes, mult);
    } 

}

int main (){
    int num;
    printf ("Digite um número entre 2 e 1000 para calcular sua tabuada: ");
    scanf ("%d", &num);

    while (num < 2 || num > 1000) {
        printf ("Digite um número entre 2 e 1000 para calcular sua tabuada: ");
        scanf ("%d", &num);  
    }

    caulculaTabuada (num);

    return 0; 

}
