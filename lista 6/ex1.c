
#include <stdio.h>
#include <stdlib.h>

/* Estrutura de um no */
typedef struct No {
    int valor;
    struct No *proximo;
} No;

/* Estrutura da lista */
typedef struct {
    No *cabeca;
    int tamanho;
} Lista;

/* Inicializa a lista */
void inicializar(Lista *l) {
    l->cabeca = NULL;
    l->tamanho = 0;
}

/* Insere um valor na posicao indicada */
int insert(Lista *l, int pos, int valor) {
    if (l == NULL || pos < 0 || pos > l->tamanho) {
        printf("Posicao invalida!\n");
        return 0;
    }

    No *novo = malloc(sizeof(No));

    if (novo == NULL) {
        printf("Erro ao alocar memoria!\n");
        return 0;
    }

    novo->valor = valor;

    if (pos == 0) {
        novo->proximo = l->cabeca;
        l->cabeca = novo;
    } else {
        No *atual = l->cabeca;

        for (int i = 0; i < pos - 1; i++) {
            atual = atual->proximo;
        }

        novo->proximo = atual->proximo;
        atual->proximo = novo;
    }

    l->tamanho++;
    return 1;
}

/* Mostra todos os elementos da lista */
void show(const Lista *l) {
    if (l == NULL) {
        printf("Lista invalida!\n");
        return;
    }

    No *atual = l->cabeca;

    while (atual != NULL) {
        printf("%d -> ", atual->valor);
        atual = atual->proximo;
    }

    printf("NULL\n");
}

/* Acede ao valor numa determinada posicao */
int acessar(const Lista *l, int pos, int *valor) {
    if (l == NULL || valor == NULL ||
        pos < 0 || pos >= l->tamanho) {
        return 0;
    }

    No *atual = l->cabeca;

    for (int i = 0; i < pos; i++) {
        atual = atual->proximo;
    }

    *valor = atual->valor;
    return 1;
}

/* Remove o elemento numa determinada posicao */
int remover(Lista *l, int pos) {
    if (l == NULL || pos < 0 || pos >= l->tamanho) {
        printf("Posicao invalida para remocao!\n");
        return 0;
    }

    No *removido;

    if (pos == 0) {
        removido = l->cabeca;
        l->cabeca = removido->proximo;
    } else {
        No *anterior = l->cabeca;

        for (int i = 0; i < pos - 1; i++) {
            anterior = anterior->proximo;
        }

        removido = anterior->proximo;
        anterior->proximo = removido->proximo;
    }

    free(removido);
    l->tamanho--;

    return 1;
}

/* Liberta toda a memoria da lista */
void liberar(Lista *l) {
    if (l == NULL) {
        return;
    }

    No *atual = l->cabeca;

    while (atual != NULL) {
        No *seguinte = atual->proximo;
        free(atual);
        atual = seguinte;
    }

    l->cabeca = NULL;
    l->tamanho = 0;
}

/* Programa principal para testar as operacoes */
int main(void) {
    Lista lista;
    int valor;

    inicializar(&lista);

    printf("=== Insercoes ===\n");

    insert(&lista, 0, 20);
    insert(&lista, 0, 10);
    insert(&lista, 2, 30);
    insert(&lista, 1, 15);

    show(&lista);
    printf("Tamanho: %d\n", lista.tamanho);

    printf("\n=== Teste de posicao invalida ===\n");
    insert(&lista, 10, 99);
    show(&lista);

    printf("\n=== Aceder a um elemento ===\n");

    if (acessar(&lista, 2, &valor)) {
        printf("Valor na posicao 2: %d\n", valor);
    } else {
        printf("Posicao invalida!\n");
    }

    printf("\n=== Remover o primeiro elemento ===\n");
    remover(&lista, 0);
    show(&lista);
    printf("Tamanho: %d\n", lista.tamanho);

    printf("\n=== Remover um elemento do meio ===\n");
    remover(&lista, 1);
    show(&lista);
    printf("Tamanho: %d\n", lista.tamanho);

    printf("\n=== Remover o ultimo elemento ===\n");
    remover(&lista, lista.tamanho - 1);
    show(&lista);
    printf("Tamanho: %d\n", lista.tamanho);

    printf("\n=== Libertar a lista ===\n");
    liberar(&lista);
    show(&lista);
    printf("Tamanho: %d\n", lista.tamanho);

    return 0;
}

