#include <stdio.h>

int main() {
    int num = 2, soma = 0;

    for (num = 2; num <= 200; num++) {
        int divisor;
        for (divisor = 2; divisor <= num && num % divisor != 0; divisor++) {}
        if (divisor == num) {
            printf("%d ", num);
            soma += num;
        }
    }

    printf("\nSoma dos primos entre 0 e 200: %d\n", soma);

    return 0;
}
