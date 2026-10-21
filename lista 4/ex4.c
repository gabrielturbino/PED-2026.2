
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main() {
    // Array estático com capacidade para 100 caracteres
    char palavra[100];

    // Lê uma palavra introduzida pelo utilizador
    printf("Introduza uma palavra: ");
    scanf("%99s", palavra);

    // strlen calcula o número de caracteres da palavra,
    // sem contar com o terminador '\0'
    int tamanho = strlen(palavra);

    // Aloca dinamicamente apenas o espaço necessário:
    // tamanho dos caracteres + 1 para '\0'
    char *palavraDinamica = malloc((tamanho + 1) * sizeof(char));

    // Verifica se a memória foi alocada corretamente
    if (palavraDinamica == NULL) {
        printf("Erro ao alocar memoria!\n");
        return 1;
    }

    // Copia a palavra do array estático para o dinâmico
    strcpy(palavraDinamica, palavra);

    // Apresenta a palavra copiada
    printf("Palavra original: %s\n", palavra);
    printf("Palavra dinamica: %s\n", palavraDinamica);
    printf("Espaco alocado: %d bytes\n", tamanho + 1);

    // Liberta a memória reservada dinamicamente
    free(palavraDinamica);

    return 0;
}
