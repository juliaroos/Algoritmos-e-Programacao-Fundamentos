#include <stdio.h>

int main() {
    int a, b, opcao;
    char repetir;

    do {
        printf("Digite dois numeros inteiros: ");
        scanf("%d %d", &a, &b);

        printf("\n--- Menu de Operacoes Bitwise ---\n");
        printf("1 - AND (&)\n");
        printf("2 - OR (|)\n");
        printf("3 - XOR (^)\n");
        printf("4 - NOT (~a e ~b)\n");
        printf("5 - Shift Left (a << 1, b << 1)\n");
        printf("6 - Shift Right (a >> 1, b >> 1)\n");
        printf("Escolha uma opcao: ");
        scanf("%d", &opcao);


        switch (opcao) {
            case 1:
                printf("Resultado (a & b): %d\n", a & b);
                break;
            case 2:
                printf("Resultado (a | b): %d\n", a | b);
                break;
            case 3:
                printf("Resultado (a ^ b): %d\n", a ^ b);
                break;
            case 4:
                printf("Resultado (~a): %d, (~b): %d\n", ~a, ~b);
                break;
            case 5:
                printf("Resultado (a << 1): %d, (b << 1): %d\n", a << 1, b << 1);
                break;
            case 6:
                printf("Resultado (a >> 1): %d, (b >> 1): %d\n", a >> 1, b >> 1);
                break;
            default:
                printf("Opcao invalida!\n");
        }


        printf("\nDeseja realizar outra operacao? (S/N): ");
        scanf(" %c", &repetir); 

    } while (repetir == 'S' || repetir == 's');

    printf("\nPrograma encerrado.\n");
    return 0;
}
