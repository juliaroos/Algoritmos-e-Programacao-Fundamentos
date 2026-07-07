#include <stdio.h>

double calculaMedia (double a, double b, double c) {
    return (a + b + c) / 3.0;
}


double encontraMaximo (double a, double b, double c) {
    if (a >= b && a >= c)
    return a;
    else if (b >= a && b >= c)
    return b; 
    else
    return c;
}


double encontraMinimo (double a, double b, double c) {
    if (a <= b && a <= c)
    return a;
    else if (b <= a && b <= c)
    return b; 
    else
    return c;
}


void calculaDesvio (double a, double b, double c){
    double media = calculaMedia (a, b, c);
    printf ("Media: %.2f \n", media);
    printf ("Desvio de leitura 1: %.2f \n", a - media);
    printf ("Desvio de leitura 2: %.2f \n", b - media);
    printf ("Desvio de leitura 3: %.2f \n", c - media);
}


void verificaFaixa (double a, double b, double c, double min, double max) {
    printf ("Leitura 1: ");
    if (a >= min && a <= max)
         printf("OK\n");
    else if (a < min )
         printf("ABAIXO DO LIMITE\n");
    else 
         printf("ACIMA DO LIMITE\n");

    printf ("Leitura 2: ");
    if (b >= min && b <= max)
         printf("OK\n");
    else if (b < min )
         printf("ABAIXO DO LIMITE\n");
    else 
         printf("ACIMA DO LIMITE\n");

    printf ("Leitura 3: ");
    if (c >= min && c <= max)
         printf("OK\n");
    else if (c < min )
         printf("ABAIXO DO LIMITE\n");
    else 
         printf("ACIMA DO LIMITE\n");
}


void exibirBarra (double media){
    int barra = (int)media; 
    if (media > 20) barra = 20; 
    printf ("Intensidade media: %.2f \n", media);
    printf("[");
    for (int intensidade = 0; intensidade < barra; intensidade++)
    printf ("*");
    printf("]\n");
}


void gerarRelatorio (double a, double b, double c) {
    double media = calculaMedia(a,b,c);
    printf("\n=== RELATORIO COMPLETO ===\n");
    printf("Leitura 1: %.2f\n", a);
    printf("Leitura 2: %.2f\n", b);
    printf("Leitura 3: %.2f\n", c);
    printf("Media: %.2f\n", media);
    printf("Maximo: %.2f\n", encontraMaximo(a,b,c));
    printf("Minimo: %.2f\n", encontraMinimo(a,b,c));
    calculaDesvio(a,b,c);
    exibirBarra(media);
    printf("==========================\n\n");
}




int main()
{
   double l1, l2, l3; 
   char repetirS = 's'; 
   int opcao;
   char repetirO = 's';

   printf ("\n === IMORTAL-1 -- SISTEMA DE BORDO === \n");

   while (repetirS == 's' || repetirS == 'S') {
   printf ("Digite a leitura 1: ");
   scanf ("%lf", &l1);
   printf ("Digite a leitura 2: ");
   scanf ("%lf", &l2);
   printf ("Digite a leitura 3: ");
   scanf ("%lf", &l3);
   


   while (repetirO == 's' || repetirO == 'S') {
     printf ("\n--- MENU ---\n");
     printf ("1 - Media\n");
     printf ("2 - Max/Min\n");
     printf ("3 - Desvios\n");
     printf ("4 - Verificacao de faixa\n");
     printf ("5 - Barra grafica\n");
     printf ("6 - Relatorio\n");
     printf ("0 - Sair\n");
     printf ("Escolha uma opcao: ");
     scanf ("%d", &opcao);

     if (opcao == 1){
          printf ("Media das leituras: %.2f\n", calculaMedia(l1, l2, l3));
     }
     else if (opcao == 2){
          printf ("A maior leitura eh: %.2f\n", encontraMaximo(l1, l2, l3));
          printf ("A menor leitura eh: %.2f\n", encontraMinimo(l1, l2, l3));
     }
     else if (opcao == 3){
          calculaDesvio(l1, l2, l3);
     }
     else if (opcao == 4){
          double minAceito, maxAceito;
          printf("Insira o minimo aceito: ");
          scanf("%lf", &minAceito); 
          printf("Insira o maximo aceito: ");
          scanf("%lf", &maxAceito); 
          verificaFaixa (l1, l2, l3, minAceito, maxAceito);
     }
     else if (opcao == 5) {
           exibirBarra (calculaMedia(l1, l2, l3));
     }
     else if (opcao == 6) {
          gerarRelatorio (l1, l2, l3);
     }
     else if (opcao == 0){
          printf("Encerrando o sistema...");
          return 0;
     }
     else 
     printf ("opcao invalida");

     printf("Deseja realizar outra operacao? (s/n): ");
            scanf(" %c", &repetirO);

   }

    printf("Deseja iniciar nova simulacao? (s/n): ");
        scanf(" %c", &repetirS);

     }

    printf("Encerrando sistema...\n");
    return 0;
