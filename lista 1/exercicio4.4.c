//exercicio 4.4//

#include <stdio.h>

int eh_primo(int n) {
    // Numeros menores ou iguais a 1 nao sao primos//
    if (n <= 1) {
        return 0;
    }
    
    for (int i = 2; i < n; i++) {
        if (n % i == 0) {
            return 0;
        }
    }
    return 1; 
}

int main() {
    int num;

    printf("Digite um numero para saber se ele e primo: ");
    scanf("%d", &num);

    if (eh_primo(num)) {
        printf("\nO numero %d e primo.\n", num);
    } else {
        printf("\nO numero %d nao e primo.\n", num);
    }

    return 0;
}
