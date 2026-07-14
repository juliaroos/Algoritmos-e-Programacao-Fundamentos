#include <stdio.h>

int main()
{
    int num = 10; 
    int *pint = NULL; 
    
    pint = &num;
    
    printf("Valor de pint (endereço de num): %p\n", pint);
    printf("Valor contido em num: %d\n", *pint);
    
    
    

    return 0;
}
