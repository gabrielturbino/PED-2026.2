
#include <stdio.h>

// Funcao que filtra os numeros positivos do vetor original
void filtra_positivos(int vetorOriginal[], int tamanho, int vetorResultado[], int *quantidadePositivos) {
    *quantidadePositivos = 0;

    // Percorre todos os elementos do vetor original
    for (int i = 0; i < tamanho; i++) {

        // Verifica se o numero e positivo
        if (vetorOriginal[i] > 0) {

            // Guarda o numero positivo no vetor resultado
            vetorResultado[*quantidadePositivos] = vetorOriginal[i];

            // Aumenta a quantidade de positivos encontrados
            (*quantidadePositivos)++;
        }
    }
}

int main() {
    // Cria o vetor original com numeros entre -100 e 100
    int numeros[] = {-5, 10, 0, 25, -30, 7, -2, 50};

    // Calcula a quantidade de elementos do vetor original
    int tamanho = sizeof(numeros) / sizeof(numeros[0]);

    // Cria o vetor que vai guardar os numeros positivos
    int resultado[8];

    // Variavel que guarda a quantidade de positivos encontrados
    int quantidadePositivos;

    // Chama a funcao para filtrar os numeros positivos
    filtra_positivos(numeros, tamanho, resultado, &quantidadePositivos);

    // Imprime os numeros positivos encontrados
    printf("Numeros positivos: ");

    for (int i = 0; i < quantidadePositivos; i++) {
        printf("%d ", resultado[i]);
    }

    printf("\n");

    return 0;
}

