#include <stdio.h>

int main() {
    int peca, casas, direcao, casainicial, direcao2;

do
{       //Menu de qual peça mover
    printf("\nQual peça você gostaria de mover?\n");
    printf("1. Torre\n");
    printf("2. Bispo\n");
    printf("3. Rainha\n");
    printf("4. Cavalo\n");
    printf("5. Sair!\n");
    scanf("%d", &peca);

        switch (peca) //Depois de selecionar a peça é possível escolher quantas casas andar
    {
        case 1:
            printf("Em qual direção você quer mover a peça?\n");
            printf("1. Direita\n");
            printf("2. Esquerda\n");
            printf("3. Cima\n");
            printf("4. Baixo\n\n");
            scanf("%d", &direcao);

            printf("Quantas casas você quer mover? (Max. 8)\n");
            scanf("%d", &casas);
            for ( casainicial = 1; casainicial <= casas; casainicial++)
            {
                if (direcao == 1)
                {
                    printf("Pra direita\n");
                }   if (direcao == 2)
                    {
                      printf("Pra esquerda\n");  
                    } if (direcao == 3)
                    {
                        printf("Pra cima\n"); 
                    }   if (direcao == 4)
                    {
                        printf("Pra baixo\n"); 
                    }
            }
            break;
        case 2:
            printf("Em qual direção você quer mover a peça?\n");
            printf("1. Superior Direita\n");
            printf("2. Supetior Esquerda\n");
            printf("3. Inferior Direita\n");
            printf("4. Inferior Esquerda\n\n");
            scanf("%d", &direcao);

            printf("Quantas casas você quer mover? (Max. 8)\n");
            scanf("%d", &casas);
            for ( casainicial = 1; casainicial <= casas; casainicial++)
            {
                if (direcao == 1)
                {
                    printf("Pra direita\n");
                    printf("Pra cima\n");
                }   if (direcao == 2)
                    {
                      printf("Pra esquerda\n");
                      printf("Pra cima\n");  
                    } if (direcao == 3)
                    {
                        printf("Pra direita\n");
                        printf("Pra baixo\n"); 
                    }   if (direcao == 4)
                    {
                        printf("Pra esquerda\n");
                        printf("Pra baixo\n"); 
                    }
            }
            break;
        case 3:
            printf("Em qual direção você quer mover a peça?\n");
            printf("1. Direita\n");
            printf("2. Esquerda\n");
            printf("3. Cima\n");
            printf("4. Baixo\n\n");
            scanf("%d", &direcao);

            printf("Quantas casas você quer mover? (Max. 8)\n");
            scanf("%d", &casas);
            for ( casainicial = 1; casainicial <= casas; casainicial++)
            {
                if (direcao == 1)
                {
                    printf("Pra direita\n");
                }   if (direcao == 2)
                    {
                      printf("Pra esquerda\n");  
                    } if (direcao == 3)
                    {
                        printf("Pra cima\n"); 
                    }   if (direcao == 4)
                    {
                        printf("Pra baixo\n"); 
                    }
            }
            break;
        case 4:
            printf("Em qual direção você quer iniciar o movimento da peça?\n");
            printf("1. Direita\n");
            printf("2. Esquerda\n");
            printf("3. Cima\n");
            printf("4. Baixo\n\n");
            scanf("%d", &direcao);
            printf("Com quantas casas você quer iniciar o movimento? (1 ou 2)\n");
            scanf("%d",&casas);

            printf("Em qual direção você quer terminar o movimento da peça?\n");
                if (direcao == 1 || direcao == 2)
                {
                    printf("1. Cima\n");
                    printf("2. Baixo\n");
                    scanf("%d", &direcao2);
                } if (direcao == 3 || direcao == 4)
                {
                    printf("1. Direita\n");
                    printf("2. Esquerda\n");
                    scanf("%d", &direcao2);
                }


                if (casas == 1) //Imprimindo o primeiro movimento simples do cavalo - quando for uma casa
                {
                    if (direcao == 1)
                    {
                        printf("Pra Direita\n");
                    }
                    if (direcao == 2)
                    {
                        printf("Pra Esquerda\n");
                    }
                    if (direcao == 3)
                    {
                        printf("Pra Cima\n");
                    }
                    if (direcao == 4)
                    {
                        printf("Pra Baixo\n");
                    } if (direcao == 1 || direcao == 2) //Imprimindo o segundo movimento do cavalo, nesse caso é movimento duplo
                {
                    if (direcao2 == 1)
                    {
                        printf("Pra Cima\n");
                        printf("Pra Cima\n");
                    }
                    if (direcao2 == 2)
                    {
                        printf("Pra Baixo\n");
                        printf("Pra Baixo\n");
                    }
                }
                if (direcao == 3 || direcao == 4)
                {
                    if (direcao2 == 1)
                    {
                        printf("Pra Direita\n");
                        printf("Pra Direita\n");
                    }
                    if (direcao2 == 2)
                    {
                        printf("Pra Esquerda\n");
                        printf("Pra Esquerda\n");
                    }}
                }
                if (casas == 2) //imprimindo o primeiro movimento do cavalo quando é duplo - 2 casas por vez
                {
                    if (direcao == 1)
                    {
                        printf("Pra Direita\n");
                        printf("Pra Direita\n");
                    }
                    if (direcao == 2)
                    {
                        printf("Pra Esquerda\n");
                        printf("Pra Esquerda\n");
                    }
                    if (direcao == 3)
                    {
                        printf("Pra Cima\n");
                        printf("Pra Cima\n");
                    }
                    if (direcao == 4)
                    {
                        printf("Pra Baixo\n");
                        printf("Pra Baixo\n");
                    }
                if (direcao == 1 || direcao == 2)
                {
                    if (direcao2 == 1)
                    {
                        printf("Pra Cima\n");
                    }
                    if (direcao2 == 2)
                    {
                        printf("Pra Baixo\n");
                    }
                    
                }
                if (direcao == 3 || direcao == 4)
                {
                    if (direcao2 == 1)
                    {
                        printf("Pra Direita\n");
                    }
                    if (direcao2 == 2)
                    {
                        printf("Pra Esquerda\n");
                    }
                    
                }
                }
                break;
        default:
            printf("Você saiu do jogo!\n");
            break;
    }
} while (peca != 5);
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