
#include <stdio.h>

// Esta função recebe os endereços de memória de duas variáveis.
// O símbolo * permite aceder ou alterar o valor guardado nesse endereço.
// Em C, usamos ponteiros para simular a passagem por referência.
void reorganizar(int *a, int *b) {
    int temp; // Variável auxiliar para guardar temporariamente um valor

    // Se o primeiro valor for menor que o segundo, trocamos os valores
    if (*a < *b) {
        temp = *a; // Guarda o valor apontado por a
        *a = *b;   // Coloca o maior valor na primeira variável
        *b = temp; // Coloca o menor valor na segunda variável
    }
}

int main() {
    int num1, num2; // Declaração de duas variáveis inteiras

    // Lê os dois valores introduzidos pelo utilizador
    printf("Introduza o primeiro valor: ");
    scanf("%d", &num1);

    printf("Introduza o segundo valor: ");
    scanf("%d", &num2);

    // O símbolo & obtém o endereço de memória de cada variável.
    // Assim, a função pode modificar os valores originais.
    reorganizar(&num1, &num2);

    // Mostra os valores atualizados depois da chamada da função
    printf("\nMaior valor: %d\n", num1);
    printf("Menor valor: %d\n", num2);

    return 0;
}
