//exercicio 4.1//

#include <stdio.h>

// Definicao da funcao FORA da funcao main
int maior(int n1, int n2, int n3) {
    int max = n1; // Assume inicialmente que n1 e o maior
    
    if (n2 > max) {
        max = n2;
    }
    if (n3 > max) {
        max = n3;
    }
    
    return max; // Retorna o maior valor encontrado
}

int main() {
    int v1, v2, v3, resultado;

    // Solicita os valores ao usuario
    printf("Digite tres valores inteiros: ");
    scanf("%d %d %d", &v1, &v2, &v3);

    // Chama a funcao passando os valores lidos
    resultado = maior(v1, v2, v3);

    // Imprime o retorno da funcao
    printf("O maior valor digitado foi: %d\n", resultado);

    return 0;
}
