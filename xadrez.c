#include <stdio.h>

// Desafio de Xadrez - MateCheck
// Este código inicial serve como base para o desenvolvimento do sistema de movimentação das peças de xadrez.
// O objetivo é utilizar estruturas de repetição e funções para determinar os limites de movimentação dentro do jogo.

/* int main() {
    // Nível Novato - Movimentação das Peças
    // Sugestão: Declare variáveis constantes para representar o número de casas que cada peça pode se mover.

    // Implementação de Movimentação do Bispo
    // Sugestão: Utilize uma estrutura de repetição para simular a movimentação do Bispo em diagonal.

    // Implementação de Movimentação da Torre
    // Sugestão: Utilize uma estrutura de repetição para simular a movimentação da Torre para a direita.

    // Implementação de Movimentação da Rainha
    // Sugestão: Utilize uma estrutura de repetição para simular a movimentação da Rainha para a esquerda.

    // Nível Aventureiro - Movimentação do Cavalo
    // Sugestão: Utilize loops aninhados para simular a movimentação do Cavalo em L.
    // Um loop pode representar a movimentação horizontal e outro vertical.

    // Nível Mestre - Funções Recursivas e Loops Aninhados
    // Sugestão: Substitua as movimentações das peças por funções recursivas.
    // Exemplo: Crie uma função recursiva para o movimento do Bispo.

    // Sugestão: Implemente a movimentação do Cavalo utilizando loops com variáveis múltiplas e condições avançadas.
    // Inclua o uso de continue e break dentro dos loops.
    
int b = 1, r = 1; // Iniciais de cada peça

    // Movimento da Torre 5 casas para a Direita
    printf("Movimento da Torre! \n");
    for (int t = 1; t <= 5; t++)
    {
        printf("Direita \n"); // Imprime a direção do movimento
    }
        printf("\n");

    // Movimento do Bispo 5 casas para a Cima, Direita
    printf("Movimento do Bispo! \n");
    while (b <= 5)
    {
        printf("Cima, Direita \n"); // Imprime a direção do movimento
        b++;
    }
        printf("\n");

    // Movimento da Rainha 8 casas para a Esquerda
    printf("Movimento da Rainha! \n");
    do
    {
        printf("Esquerda \n"); // Imprime a direção do movimento
        r++;
    } while (r <= 8);

        printf("\n");
        
    // Desafio Aventureiro
    // Movimentação do Cavalo 2 casas para Baixo e 1 para a Esquerda
    int movimentoCompleto = 1; //Flag para controlar o movimento em 'L'

    printf("Movimento do Cavalo! \n");
    while (movimentoCompleto--)
    {
        for (int c = 1; c <= 2; c++)
        {
            printf("Baixo \n"); //Imprime "Baixo" duas vezes
        }
        
        printf("Esquerda \n"); //Imprime "Esquerda" uma vez
    }
    

    return 0;
} 



void moverTorre (int t) {

    if (t > 0){
        printf("Direita \n");
        moverTorre (t - 1);
    }
}

void moverRainha (int r) {

    if (r > 0){
        printf("Esquerda \n");
        moverRainha (r - 1);
    }
}

void moverBispo (int b) {

    if (b > 0){
        printf("Direita, Cima \n");
        moverBispo (b - 1);
    }
}

int main(){

    // Movimento da Torre 5 casas para a Direita
    printf("Movimento da Torre! \n");
    moverTorre (5);
    printf("\n");

    // Movimento da Rainha 8 casas para a Esquerda
    printf("Movimento da Rainha! \n");
    moverRainha (8);
    printf("\n");

    // Movimento do Bispo 5 casas para a Cima, Direita
    printf("Movimento do Bispo! \n");
    moverBispo (5);
    printf("\n");
    
    return 0;
} */



// Função recursiva para o movimento da Torre
void moverTorre(int casas) {
    if (casas == 0)
        return;
    printf("Direita\n");
    moverTorre(casas - 1);
}

// Função recursiva para o movimento da Rainha
void moverRainha(int casas) {
    if (casas == 0)
        return;
    printf("Esquerda\n");
    moverRainha(casas - 1);
}

// Função recursiva para o movimento horizontal do Bispo (usada dentro do loop vertical)
void moverBispoHorizontal(int casasHorizontais) {
    if (casasHorizontais == 0)
        return;
    printf("Direita ");
    moverBispoHorizontal(casasHorizontais - 1);
}

// Cavalo: movimento para cima 2x e direita 1x com loops aninhados e controle de fluxo
void moverCavalo() {
    printf("Movimento do Cavalo!\n");
    for (int cima = 1; cima <= 2; cima++) {
        for (int i = 0; i < 2; i++) {
            if (cima == 2) {
                printf("Direita\n");
                break;
            }
            printf("Cima\n");
        }
    }
    printf("\n");
}

int main() {
    int casasTorre = 5;
    int casasBispoVertical = 5;
    int casasBispoHorizontal = 1; // fixo para cada linha
    int casasRainha = 8;

    // Movimento da Torre
    printf("Movimento da Torre!\n");
    moverTorre(casasTorre);
    printf("\n");

    // Movimento do Bispo (vertical: loop; horizontal: recursão)
    printf("Movimento do Bispo!\n");
    for (int i = 1; i <= casasBispoVertical; i++) {
        printf("Cima ");
        moverBispoHorizontal(casasBispoHorizontal);
        printf("\n");
    }
    printf("\n");

    // Movimento da Rainha
    printf("Movimento da Rainha!\n");
    moverRainha(casasRainha);
    printf("\n");

    // Movimento do Cavalo com loop aninhado
    moverCavalo();

    return 0;
}
