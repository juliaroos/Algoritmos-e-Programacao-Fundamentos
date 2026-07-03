#include <stdio.h>

int main() {
    int num = 2, soma = 0;

    while (num <= 200) {
        int divisor = 2;
        while (divisor <= num && num % divisor != 0) {
            divisor++;
        }
        if (divisor == num) {
            printf("%d ", num);
            soma += num;
        }
        num++;
    }

    printf("\nSoma dos primos entre 0 e 200: %d\n", soma);

    return 0;
}
