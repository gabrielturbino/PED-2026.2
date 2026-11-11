#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {

    // Aqui criamos as variáveis que vamos usar durante o jogo
    int secreto[3];       // Guarda os três números que o jogador precisa descobrir
    int palpite[3];       // Guarda os números que o jogador digitar
    int tentativas = 0;   // Conta quantas vezes o jogador já tentou
    int acertou = 0;      // Serve para saber se o jogador já ganhou

    // Faz o sorteio dos números de forma aleatória
    srand(time(NULL));

    // Sorteia o primeiro número, que não pode ser zero
    secreto[0] = rand() % 9 + 1;

    // Sorteia o segundo número até que ele seja diferente do primeiro
    do {
        secreto[1] = rand() % 10;
    } while (secreto[1] == secreto[0]);

    // Sorteia o terceiro número, sem repetir os outros dois
    do {
        secreto[2] = rand() % 10;
    } while (secreto[2] == secreto[0] ||
             secreto[2] == secreto[1]);

    // Mostra as instruções para o jogador entender como funciona
    printf("=================================\n");
    printf("       JOGO DE ADIVINHAR\n");
    printf("=================================\n");
    printf("Adivinhe o numero secreto de 3 digitos!\n");
    printf("Voce tem ate 10 tentativas.\n\n");

    // O jogo vai continuar enquanto o jogador não acertar
    // e ainda tiver tentativas disponíveis
    while (tentativas < 10 && acertou == 0) {

        printf("Chance %d\n", tentativas + 1);

        // Pede para o jogador digitar um número de três dígitos
        printf("Digite um numero de 3 digitos: ");

        int numero;
        scanf("%d", &numero);

        // Confere se o jogador digitou um número válido
        if (numero < 100 || numero > 999) {
            printf("Digite um numero valido de 3 digitos!\n\n");
            continue;
        }

        // Separa o número digitado para conseguir comparar cada dígito
        palpite[0] = numero / 100;
        palpite[1] = (numero / 10) % 10;
        palpite[2] = numero % 10;

        // Agora vamos comparar o palpite com o número sorteado
        printf("Saida: ");

        for (int i = 0; i < 3; i++) {

            // Se o número estiver no lugar certo, mostramos o sinal de +
            if (palpite[i] == secreto[i]) {
                printf("+");
            }

            else {
                int encontrado = 0;

                // Se não estiver no lugar certo, procuramos nas outras posições
                for (int j = 0; j < 3; j++) {

                    if (palpite[i] == secreto[j]) {
                        encontrado = 1;
                    }
                }

                // Se encontramos o número, mas em outro lugar, mostramos !
                if (encontrado == 1) {
                    printf("!");
                }

                // Se não encontramos o número, mostramos _
                else {
                    printf("_");
                }
            }
        }

        printf("\n\n");

        // Confere se os três números estão exatamente nas posições corretas
        if (palpite[0] == secreto[0] &&
            palpite[1] == secreto[1] &&
            palpite[2] == secreto[2]) {

            // Como acertou, avisamos que o jogador ganhou
            acertou = 1;

            printf("Parabens! Voce acertou!\n");
        }

        // Soma uma tentativa depois de cada palpite válido
        tentativas++;
    }

    // Se chegou ao fim das 10 tentativas sem acertar, mostra o resultado
    if (acertou == 0) {

        printf("Que pena! Suas 10 tentativas acabaram.\n");

        // Revela qual era o número que o jogador precisava descobrir
        printf("O numero secreto era: %d%d%d\n",
               secreto[0], secreto[1], secreto[2]);
    }

    // Mostra a mensagem de encerramento do jogo
    printf("\nFim de jogo!\n");

    return 0;
}
