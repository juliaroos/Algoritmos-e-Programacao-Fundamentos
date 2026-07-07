#include <stdio.h> 

int main (){
    int quant, cont, num, pos = 0;

    printf ("Digite a quantidade de valores que você deseja inserir: "); 
    scanf ("%d", &quant);

    for (cont = 0 ; cont < quant; cont++) {
    printf("Insira um valor inteiro: ");
    scanf ("%d", &num);
         if (num >= 0)
         pos++;   
}

    printf ("Foram digitados %d números positivos", pos);

return 0;

}
