
#include <stdio.h>
#include <stdlib.h>

int main() {
    int *ptr, i;

    // CODIGO 1
    ptr = (int *) calloc(10, sizeof(int));

    // Verifica se a memoria foi alocada
    if (ptr == NULL) {
        return 1;
    }

    *ptr = 10;

    // Incrementa o valor apontado por ptr cinco vezes
    for (i = 0; i < 5; i++) {
        *ptr = *ptr + 1;
    }

    printf("Codigo 1\n");
    printf("ptr: %d\n", *ptr);

    free(ptr);

    // CODIGO 2
    ptr = (int *) calloc(10, sizeof(int));

    // Verifica se a memoria foi alocada
    if (ptr == NULL) {
        return 1;
    }

    *ptr = 10;

    // Avanca o ponteiro cinco posicoes de memoria
    for (i = 0; i < 5; i++) {
        ptr = ptr + 1;
    }

    printf("Codigo 2\n");
    printf("ptr: %d\n", *ptr);

    // Liberta a memoria usando o endereco original
    // (neste exemplo, guardamos o endereco original)
    return 0;
}


