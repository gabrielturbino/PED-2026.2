
#include <stdio.h>
#include <stdlib.h>

// Estrutura do TAD Vetor
typedef struct {
    int *dados;           // Ponteiro para o array dinâmico
    int tamanho_alocado;  // Capacidade total reservada
    int tamanho_ocupado;  // Número de elementos existentes
} Vetor;

// Cria um vetor com a capacidade inicial indicada
Vetor cria_vetor(int capacidade) {
    Vetor v;

    v.dados = NULL;
    v.tamanho_alocado = 0;
    v.tamanho_ocupado = 0;

    if (capacidade > 0) {
        v.dados = malloc(capacidade * sizeof(int));

        if (v.dados != NULL) {
            v.tamanho_alocado = capacidade;
        }
    }

    return v;
}

// Adiciona um valor ao final do vetor
int append(Vetor *v, int valor) {
    // Se o vetor estiver cheio, duplica a capacidade
    if (v->tamanho_ocupado == v->tamanho_alocado) {
        int nova_capacidade;

        if (v->tamanho_alocado == 0) {
            nova_capacidade = 1;
        } else {
            nova_capacidade = v->tamanho_alocado * 2;
        }

        // Tenta aumentar a memória sem perder o ponteiro original
        int *temp = realloc(
            v->dados,
            nova_capacidade * sizeof(int)
        );

        if (temp == NULL) {
            return 0; // Erro de alocação
        }

        v->dados = temp;
        v->tamanho_alocado = nova_capacidade;
    }

    // Insere o valor na primeira posição livre
    *(v->dados + v->tamanho_ocupado) = valor;
    v->tamanho_ocupado++;

    return 1;
}

// Mostra apenas os elementos ocupados
void show(const Vetor *v) {
    printf("[");

    for (int i = 0; i < v->tamanho_ocupado; i++) {
        printf("%d", *(v->dados + i));

        if (i < v->tamanho_ocupado - 1) {
            printf(", ");
        }
    }

    printf("]\n");
}

// Cria uma cópia dos elementos entre x0 e x1, inclusive
Vetor slice(const Vetor *v, int x0, int x1) {
    Vetor resultado = cria_vetor(0);

    // Verifica se o intervalo é válido
    if (x0 < 0 || x1 < x0 ||
        x1 >= v->tamanho_ocupado) {
        return resultado;
    }

    int quantidade = x1 - x0 + 1;

    // Reserva exatamente o espaço necessário
    resultado = cria_vetor(quantidade);

    if (resultado.dados == NULL) {
        return resultado;
    }

    // Copia os elementos para o novo vetor
    for (int i = 0; i < quantidade; i++) {
        *(resultado.dados + i) =
            *(v->dados + x0 + i);
    }

    resultado.tamanho_ocupado = quantidade;

    return resultado;
}

// Remove o último elemento sem diminuir a memória alocada
void pop(Vetor *v) {
    if (v->tamanho_ocupado > 0) {
        v->tamanho_ocupado--;
    }
}

// Liberta a memória do vetor
void destroi_vetor(Vetor *v) {
    free(v->dados);

    v->dados = NULL;
    v->tamanho_alocado = 0;
    v->tamanho_ocupado = 0;
}

// Programa principal
int main(void) {
    // Cria um vetor com capacidade para 2 elementos
    Vetor v = cria_vetor(2);

    if (v.dados == NULL) {
        // A capacidade inicial é 2, por isso NULL indica erro
        printf("Erro ao criar o vetor!\n");
        return 1;
    }

    // Adiciona valores ao vetor
    if (!append(&v, 10) ||
        !append(&v, 20) ||
        !append(&v, 30) ||
        !append(&v, 40)) {
        printf("Erro ao adicionar elementos!\n");
        destroi_vetor(&v);
        return 1;
    }

    printf("Vetor original: ");
    show(&v);

    printf("Tamanho alocado: %d\n", v.tamanho_alocado);
    printf("Tamanho ocupado: %d\n\n", v.tamanho_ocupado);

    // Copia os elementos das posições 1 a 2
    Vetor pedaco = slice(&v, 1, 2);

    printf("Resultado do slice: ");
    show(&pedaco);

    printf("Tamanho alocado do slice: %d\n", pedaco.tamanho_alocado);
    printf("Tamanho ocupado do slice: %d\n\n", pedaco.tamanho_ocupado);

    // Remove o último elemento do vetor original
    pop(&v);

    printf("Vetor depois de pop: ");
    show(&v);

    printf("Tamanho alocado: %d\n", v.tamanho_alocado);
    printf("Tamanho ocupado: %d\n", v.tamanho_ocupado);

    // Liberta a memória dos dois vetores
    destroi_vetor(&pedaco);
    destroi_vetor(&v);

    return 0;
}

