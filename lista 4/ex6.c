
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

// Constantes definidas no cabeçalho do módulo
#define FALSE 0
#define TRUE 1

// Função aloca:
// Se preenche for TRUE, aloca memória inicializada a zero
// Se preenche for FALSE, aloca memória sem inicializar os valores
int *aloca(int n, int preenche) {
    int *v;

    if (preenche == TRUE) {
        // calloc reserva memória e inicializa os elementos a zero
        v = calloc(n, sizeof(int));
    } else {
        // malloc reserva memória sem inicializar os elementos
        v = malloc(n * sizeof(int));
    }

    // Devolve o endereço da memória alocada
    return v;
}

// Função imprime:
// Imprime o vetor usando apenas aritmética de ponteiros
// Não utiliza a sintaxe de colchetes []
void imprime(int *v, int n) {
    int i;

    for (i = 0; i < n; i++) {
        // *(v + i) acede ao elemento na posição i
        printf("%d ", *(v + i));
    }

    printf("\n");
}

// Função preenche:
// Se is_aleatorio for TRUE, preenche com valores entre 0 e 100
// Caso contrário, preenche todas as posições com valor
// Utiliza apenas aritmética de ponteiros
void preenche(int *v, int n, int valor, int is_aleatorio) {
    int i;

    for (i = 0; i < n; i++) {
        if (is_aleatorio == TRUE) {
            // rand() % 101 gera valores de 0 a 100
            *(v + i) = rand() % 101;
        } else {
            // Coloca o valor indicado em cada posição
            *(v + i) = valor;
        }
    }
}

int main(void) {
    // Inicializa o gerador de números aleatórios
    srand((unsigned int) time(NULL));

    // Define o tamanho dos vetores
    int n = 5;

    // Declara os dois ponteiros inteiros
    int *v1;
    int *v2;

    // v1 é alocado sem inicializar os seus elementos
    v1 = aloca(n, FALSE);

    // v2 é alocado e inicializado com zeros
    v2 = aloca(n, TRUE);

    // Verifica se as alocações foram bem-sucedidas
    if (v1 == NULL || v2 == NULL) {
        printf("Erro ao alocar memoria!\n");

        // Liberta a memória que tenha sido alocada
        free(v1);
        free(v2);

        return 1;
    }

    // Imprime os vetores antes de os preencher
    printf("Vetores inicialmente:\n");

    printf("v1: ");
    imprime(v1, n);

    printf("v2: ");
    imprime(v2, n);

    // Preenche v1 com números aleatórios entre 0 e 100
    preenche(v1, n, 0, TRUE);

    // Preenche v2 com o valor 100 em todas as posições
    preenche(v2, n, 100, FALSE);

    // Imprime os vetores depois de os preencher
    printf("\nVetores depois de preencher:\n");

    printf("v1: ");
    imprime(v1, n);

    printf("v2: ");
    imprime(v2, n);

    // Liberta a memória dos dois vetores
    free(v1);
    free(v2);

    return 0;
}
