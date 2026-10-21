
#include <stdio.h>

// Funcao recursiva que calcula a posicao do sobrevivente
int calcularSobrevivente(int numeroPessoas, int passoEliminacao) {

    // Caso base: quando existe apenas uma pessoa, a posicao e 0
    if (numeroPessoas == 1) {
        return 0;
    }

    // Calcula a posicao do sobrevivente para menos uma pessoa
    int posicaoAnterior = calcularSobrevivente(numeroPessoas - 1, passoEliminacao);

    // Calcula a posicao do sobrevivente no circulo atual
    return (posicaoAnterior + passoEliminacao) % numeroPessoas;
}

int main() {
    int numeroPessoas, passoEliminacao;

    // Ler o numero de pessoas e o passo de eliminacao
    scanf("%d %d", &numeroPessoas, &passoEliminacao);

    // Mostrar a posicao original do sobrevivente
    printf("%d\n", calcularSobrevivente(numeroPessoas, passoEliminacao));

    return 0;
}
