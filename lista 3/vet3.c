
#include <stdio.h>

int main() {
    // Declara um vetor estatico com 10 inteiros
    int vetor[10];

    // Preenche o vetor com numeros de 1 a 10 usando ponteiros
    for (int i = 0; i < 10; i++) {
        *(vetor + i) = i + 1;
    }

    // Imprime os elementos do vetor usando aritmetica de ponteiros
    for (int i = 0; i < 10; i++) {
        printf("%d ", *(vetor + i));
    }

    printf("\n");

    return 0;
}
