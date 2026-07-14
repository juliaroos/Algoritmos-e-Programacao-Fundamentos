#include <stdio.h>

int main()
{
    int num = 10; 
    int *pint = NULL; 
    float numm = 2.5;
    float *pfloat;
    
    pint = &num;
    pfloat = &numm;
    
    printf("Valor de pint (endereço de num): %p\n", pint);
    printf("Valor contido em num: %d\n", *pint);
    printf("Valor de pfloat (endereço de numm): %p\n", pfloat);
    printf("Valor contido em num: %f\n", *pfloat);
    
    
    

    return 0;
}
