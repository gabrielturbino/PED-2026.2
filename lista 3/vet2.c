
#include <stdio.h>

// Funcao que recebe um vetor e o seu tamanho
void zera(int vetor[], int tamanho) {

    // Coloca todos os elementos do vetor a zero
    for (int i = 0; i < tamanho; i++) {
        vetor[i] = 0;
    }

    // Copia o valor da posicao 1 para a variavel valor
    int valor = vetor[1];

    // Altera apenas a variavel local valor
    valor = 10;
}

int main() {

    // Cria um vetor com tres elementos
    int vetor[] = {1, 2, 3};

    // Chama a funcao que altera os elementos do vetor
    zera(vetor, 3);

    // Mostra os elementos do vetor
    for (int i = 0; i < 3; i++) {
        printf("%d ", vetor[i]);
    }

    return 0;
}

