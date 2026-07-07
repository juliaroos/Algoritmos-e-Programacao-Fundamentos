#include <stdio.h>

void imprimirQuadradosPares(int N) {
    for (int i = 2; i <= N; i += 2)
        printf("%d\n", i * i);
}

int main() {
    int N;
    printf("Digite um valor entre 5 e 1000: ");
    scanf("%d", &N);
    
    while (N < 5 || N > 1000){
        printf("Digite um valor entre 5 e 1000: ");
        scanf("%d", &N);
    }
    
    imprimirQuadradosPares(N);

    return 0;
}
