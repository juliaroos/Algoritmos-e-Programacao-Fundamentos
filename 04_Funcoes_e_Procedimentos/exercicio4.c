#include <stdio.h>

int somaPositivos(int x, int y) {
    if (x >= 0 && y >= 0)
    return x + y;
    else 
    return -1;
}

float divide(float x, float y) {
    if (y != 0)
    return x/y;
    else {
        printf ("ERRO: Y IGUAL A 0");
        return 0;
    }
}

char verificaTriangulo(int x, int y, int z) {
    if (x + y <= z || x + z <= y || y + z <= x)
        return 'N';

    if (x == y && y == z)
        return 'Q';
    else if (x == y || y == z || z == x)
        return 'I';
    else
        return 'E';
}

char verificaIdade(int x) {
    if (x < 0) 
        return 'E';
    else if (x >= 0 && x <= 12)
        return 'K';
    else if (x >= 13 && x <= 18)
        return 'T';
    else if (x >= 19 && x <= 120)
        return 'A';
    else 
    return 'E';
}

int contaAte300(int x) {
    if (x > 300){
        printf ("ERRO: número maior que 300.");
        return 0;
    }
    else 
        for (; x <= 300; x++)
        printf ("%d ", x);
    return 1;
}

int verificaPrimo(int x) {
    int divisor;
    if (x < 2){
        return 0;
    }
    else 
        for (divisor = 2; divisor < x; divisor++) {
         if (x % divisor == 0) {
            return 0;
         }
        }
    return 1;
}

int main() {

    printf("Soma dos positivos: %d\n", somaPositivos(5, 7));

    printf("Divisao: %.2f\n", divide(10, 2));

    printf("Triangulo: %c\n", verificaTriangulo(3, 3, 3));
    printf("Triangulo: %c\n", verificaTriangulo(3, 3, 5));
    printf("Triangulo: %c\n", verificaTriangulo(3, 4, 5));
    printf("Triangulo: %c\n", verificaTriangulo(1, 2, 5));

    printf("Idade 10: %c\n", verificaIdade(10));
    printf("Idade 16: %c\n", verificaIdade(16));
    printf("Idade 30: %c\n", verificaIdade(30));
    printf("Idade -5: %c\n", verificaIdade(-5));

    printf("\nContando ate 300:\n");
    contaAte300(295);

    printf("\n\n17 eh primo? %d\n", verificaPrimo(17));
    printf("20 eh primo? %d\n", verificaPrimo(20));

    return 0;
}
