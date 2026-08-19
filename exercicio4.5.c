//ecercicio 4.5//

#include <stdio.h>

int somaDigitos(int numero) {
    int soma = 0;

    while (numero > 0) {
        soma += numero % 10;
        numero /= 10;
    }

    return soma;
}

int main() {
    int numero;

    printf("Introduza um numero inteiro para somar os números que o compoe: ");
    scanf("%d", &numero);

    printf("A soma dos digitos e: %d\n", somaDigitos(numero));

    return 0;
}