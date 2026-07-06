#include <stdio.h>

int main()
{
    int quantVogais = 0;
    for(int i=0; i<10; i++){
        char carac;
        printf("Digite um caractere: ");
        scanf(" %c", &carac);
        if(carac == 'A' || carac == 'E' || carac ==  'I' || carac == 'O' || carac == 'U' || 
           carac == 'a' || carac == 'e' || carac ==  'i' || carac == 'o' || carac == 'u')
                quantVogais++;
    }
    
    printf("Quantidade de vogais digitadas: %d\n", quantVogais);

    return 0;
}
