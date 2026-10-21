
#include <stdio.h>
#include <stdlib.h>

// Adiciona um valor ao array na posição indicada.
// Se for necessário, aumenta a memória com realloc.
// Devolve o ponteiro para o array atualizado.
int *adiciona_valor(int *v, int tamanho, int valor, int pos) {

    // Impede posições negativas
    if (pos < 0) {
        printf("Posicao invalida!\n");
        return v;
    }

    // Se a posição estiver fora do array, aumenta a memória
    if (pos >= tamanho) {
        int novoTamanho = pos + 1;

        // realloc aumenta o espaço para incluir a posição pos
        int *temp = realloc(v, novoTamanho * sizeof(int));

        // Verifica se a realocação foi bem-sucedida
        if (temp == NULL) {
            printf("Erro ao alocar memoria!\n");
            return v;
        }

        // Atualiza o ponteiro e o tamanho
        v = temp;
        tamanho = novoTamanho;
    }

    // Guarda o valor na posição pretendida
    v[pos] = valor;

    return v;
}

int main() {
    int tamanho = 3;

    // Reserva memória para três inteiros
    int *v = malloc(tamanho * sizeof(int));

    if (v == NULL) {
        printf("Erro ao alocar memoria!\n");
        return 1;
    }

    // Inicializa o array
    v[0] = 10;
    v[1] = 20;
    v[2] = 30;

    int valor = 99;
    int pos = 4;

    // Se pos for 4, o array passa a ter cinco posições
    v = adiciona_valor(v, tamanho, valor, pos);

    // Mostra os valores do array atualizado
    printf("Array atualizado:\n");

    for (int i = 0; i <= pos; i++) {
        printf("v[%d] = %d\n", i, v[i]);
    }

    // Liberta a memória dinâmica
    free(v);

    return 0;
}
