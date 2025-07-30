#include <stdio.h>

int main() {
    int peca, casas, direcao, casainicial;

do
{       //Menu de qual peça mover
    printf("\nQual peça você gostaria de mover?\n");
    printf("1. Torre\n");
    printf("2. Bispo\n");
    printf("3. Rainha\n");
    printf("4. Sair!\n");
    scanf("%d", &peca);

        switch (peca) //Depois de selecionar a peça é possível escolher quantas casas andar
    {
        case 1:
            printf("Quantas casas você quer mover? (Max. 8)\n");
            scanf("%d", &casas);
            for ( casainicial = 1; casainicial <= casas; casainicial++)
            {
                printf("Pra cima\n");
            }
            break;
        case 2:
            printf("Quantas casas você quer mover? (Max. 8)\n");
            scanf("%d", &casas);
            for ( casainicial = 1; casainicial <= casas; casainicial++)
            {
                printf("Pra cima\n");
                printf("Pra direita\n");
            }
            break;
        case 3:
            printf("Quantas casas você quer mover? (Max. 8)\n");
            scanf("%d", &casas);
            for ( casainicial = 1; casainicial <= casas; casainicial++)
            {
                printf("Pra esquerda\n");
            }
            break;
        default:
            printf("Você saiu do jogo!\n");
            break;
    }
} while (peca != 4);
return 0;
}

// Desafio de Xadrez - MateCheck
// Este código inicial serve como base para o desenvolvimento do sistema de movimentação das peças de xadrez.
// O objetivo é utilizar estruturas de repetição e funções para determinar os limites de movimentação dentro do jogo.


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

    
