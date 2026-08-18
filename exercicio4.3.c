//exercicio 4.3//

#include <stdio.h>

long fatorial(int n) {
    long fat = 1; 
    if (n == 0 || n == 1) {
        return 1;
    }
    for (int i = n; i > 1; i--) {
        fat *= i;
    }
    return fat;
}

int main() {
    int num;

    printf("Digite um numero nao negativo para saber o fatorial: ");
    scanf("%d", &num);

    if (num < 0) {
        printf("O numero nao pode ser negativo!\n");
    } else {
        long resultado = fatorial(num);
        printf("O resultado do fatorial de %d e: %ld\n", num, resultado);
    }

    return 0;
}