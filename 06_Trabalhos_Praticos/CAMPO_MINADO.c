#include <stdio.h>
#include <stdlib.h>
#include <time.h> // Adicionado para funcionar o srand(time(NULL))

// variaveis globais.
int tela[9][9];
int telajogador[9][9];

void inicializaTela(){
    int i, j, bombas = 0;
    
    // preenche a matriz apenas com o número 0.
    for (i = 0; i < 9; i++) {
        for (j = 0; j < 9; j++) {
            tela[i][j] = 0;
        }
    }
    
    // coloca 10 bombas na matriz.
    while (bombas < 10) {
        int lin = rand() % 9;
        int col = rand() % 9;
        
        // se a casa nao for uma bomba, adiciona uma bomba a ela.
        if (tela[lin][col] != -1) {
            tela[lin][col] = -1;
            bombas++;
        }
    }
    
    // coloca números ao redor das bombas.
    for (i = 0; i < 9; i++) {
        for (j = 0; j < 9; j++) {

            // se a casa for uma bomba, pula pra prox casa. 
            if (tela[i][j] == -1)
                continue;
                
            // conta quantas bombas tem em volta dql casa.
            int contador = 0;
            int deslocaLinha, deslocaColuna;
            
            // olha para todas as 8 casinhas em volta.
            for (deslocaLinha = -1; deslocaLinha <= 1; deslocaLinha++) {
                for (deslocaColuna = -1; deslocaColuna <= 1; deslocaColuna++) {
                    
                    // ignora a propria casa
                    if (deslocaLinha == 0 && deslocaColuna == 0) 
                        continue;
                        
                    // calcula a posição da casa que está sendo examinada.
                    int novaLinha = i + deslocaLinha;
                    int novaColuna = j + deslocaColuna;
                    
                    // garante que a casa ao redor está dentro da matriz
                    if (novaLinha >= 0 && novaLinha < 9 && novaColuna >= 0 && novaColuna < 9) {
                           
                        // se a casa que estiver em volta for uma bomba, adiciona 1 a casa atual.
                        if (tela[novaLinha][novaColuna] == -1) {
                            contador++;
                        }
                    }
                }
            }
            tela[i][j] = contador;
        }
    }
}

void imprimeTelaJogador() { 
    int i, j;
    printf("\n   0  1  2  3  4  5  6  7  8\n"); // Linha guia de colunas
     for (i = 0; i < 9; i++) {
        printf("%d ", i); // Linha guia de linhas
        for (j = 0; j < 9; j++) {
            
            // se o numero na TELA DO JOGADOR for 0 (ainda nao descoberto), vai aparecer X.
            if (telajogador[i][j] == 0)
                printf(" X ");
                
            // se o numero ja foi descoberto, vai ser mostrado o valor real da TELA
            else {
                if (tela[i][j] == -1) {  
                    printf("\x1b[31m -1 \x1b[0m");  // bomba vermelha
                }
                else if (tela[i][j] == 0) {
                    printf("\x1b[32m  0 \x1b[0m");  // zero verde
                }
                else {
                    printf("\x1b[34m  %d \x1b[0m", tela[i][j]); // número azul
                }
            }
        }
        printf("\n");
    }
}

void imprimeTelaOriginal() {
    int i, j;
    printf("\n   0  1  2  3  4  5  6  7  8\n");
    for (i = 0; i < 9; i++) {
        printf("%d ", i);
        for (j = 0; j < 9; j++) {
            if (tela[i][j] == -1) {  
                printf("\x1b[31m -1 \x1b[0m");  // bomba vermelha
            }
            else if (tela[i][j] == 0) {
                printf("\x1b[32m  0 \x1b[0m");  // zero verde
            }
            else {
                printf("\x1b[34m  %d \x1b[0m", tela[i][j]); // número azul
            }
        }
        printf("\n");
    }
}

void revelarZeros(int linha, int coluna) { 
    int filaLinha[81];
    int filaColuna[81];
    int inicio = 0;
    int fim = 0;
 
    filaLinha[fim] = linha; 
    filaColuna[fim] = coluna;
    fim++; 

    telajogador[linha][coluna] = 1;
    
     while (inicio < fim) {
        int atualLinha = filaLinha[inicio]; 
        int atualColuna = filaColuna[inicio];
        inicio++; 
        
        for (int deslocaLinha = -1; deslocaLinha <= 1; deslocaLinha++) {
            for (int deslocaColuna = -1; deslocaColuna <= 1; deslocaColuna++) {
                
                int novaLinha = atualLinha + deslocaLinha;
                int novaColuna = atualColuna + deslocaColuna;
                
                if (novaLinha >= 0 && novaLinha < 9 && novaColuna >= 0 && novaColuna < 9) {
                    if (telajogador[novaLinha][novaColuna] == 0) {
                        telajogador[novaLinha][novaColuna] = 1;
                        
                        if (tela[novaLinha][novaColuna] == 0) {
                            filaLinha[fim] = novaLinha;
                            filaColuna[fim] = novaColuna;
                            fim++; 
                        }
                    }
                }
            }
        }
    }
}   

// Nova função para verificar se o jogador limpou todas as casas sem bombas
int verificarVitoria() {
    int casasReveladas = 0;
    for (int i = 0; i < 9; i++) {
        for (int j = 0; j < 9; j++) {
            if (telajogador[i][j] == 1) {
                casasReveladas++;
            }
        }
    }
    // Total de casas (81) - Bombas (10) = 71 casas livres
    if (casasReveladas == 71) {
        return 1;
    }
    return 0;
}

int posicaoEscolhida(int linha, int coluna) {
    // Validação para não escolher coordenadas fora da matriz
    if (linha < 0 || linha > 8 || coluna < 0 || coluna > 8) {
        printf("\nCoordenadas inválidas! Tente novamente.\n");
        return 0;
    }

    // se o jogador escolher uma bomba ele perde
    if (tela[linha][coluna] == -1) {
        imprimeTelaOriginal();
        printf("\n\x1b[31mGAME OVER! Você clicou em uma bomba.\x1b[0m\n");
        return 1; 
    }

    // se o jogador escolher um 0, outros 0 sao revelados ao redor
    if (tela[linha][coluna] == 0) {
        revelarZeros(linha, coluna);
    } 
    else {
        telajogador[linha][coluna] = 1;
    }
    
    imprimeTelaJogador();
    
    // Verifica se ganhou após a jogada
    if (verificarVitoria()) {
        printf("\n\x1b[32mParabéns! Você encontrou todas as casas seguras e VENCEU!\x1b[0m\n");
        return 1; // Para encerrar o jogo
    }

    return 0;
}
            
int main() {
    srand(time(NULL));
    inicializaTela();
    
    for (int i = 0; i < 9; i++) {
        for (int j = 0; j < 9; j++) {
            telajogador[i][j] = 0;
        }
    }

    printf("--- CAMPO MINADO ---");
    imprimeTelaJogador(); 

    int gameOver = 0;

    while (gameOver == 0) {       
        int linha, coluna;

        printf("\nEscolha linha (0 a 8): ");
        if (scanf("%d", &linha) != 1) return 1; // Proteção simples contra letras

        printf("Escolha coluna (0 a 8): ");
        if (scanf("%d", &coluna) != 1) return 1;
        
        gameOver = posicaoEscolhida(linha, coluna);
    }

    return 0;
}
