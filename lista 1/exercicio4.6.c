//ecercicio 4.6//

#include <stdio.h>

int isCapicua(int numero) {
    int original = numero;
    int invertido = 0;
    int digito;

    while (numero > 0) {
        digito = numero % 10;
        invertido = invertido * 10 + digito;
        numero /= 10;
    }

    if (original == invertido) {
        return 1;
    } else {
        return 0;
    }
}

int main() {
    int numero;

    printf("Introduza um numero inteiro: ");
    scanf("%d", &numero);

    printf("%d\n", isCapicua(numero));

    return 0;
}
