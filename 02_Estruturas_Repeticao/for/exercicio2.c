#include <stdio.h>

int main()
{
    int num1, num2;
    printf("Digite dois números inteiros: ");
    scanf ("%d %d", &num1, &num2);
    
    for (num1++; num1 < num2; num1++) {
        printf("%d \n", num1);
    }

    return 0;
}
