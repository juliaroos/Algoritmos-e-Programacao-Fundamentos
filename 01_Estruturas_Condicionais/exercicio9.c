#include <stdio.h>
#include <math.h>

int main()
{
    char letra;
    printf("Insira uma letra: ");
    scanf ("%c", &letra); 
    
    if (letra == 'a' || letra == 'A' || letra == 'e' || letra == 'E' || letra == 'i' || 
        letra == 'I' || letra == 'o' || letra == 'O' || letra == 'u' || letra == 'U')
        printf ("A letra %c é uma vogal.", letra);
        
    else 
    printf ("A letra %c é uma consoante.", letra);
    
    return 0;
}
