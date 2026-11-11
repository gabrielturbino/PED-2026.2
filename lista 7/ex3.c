#include <stdio.h>

#define MAX 100

// Criamos o vetor que vai funcionar como nossa fila
int fila[MAX];
int inicio = 0;
int fim = 0;
int quantidade = 0;

// Essa função coloca uma criança no final da fila
void enfileirar(int valor) {
    fila[fim] = valor;
    fim = (fim + 1) % MAX;
    quantidade++;
}

// Aqui retiramos a primeira criança da fila
int desenfileirar() {
    int valor = fila[inicio];
    inicio = (inicio + 1) % MAX;
    quantidade--;
    return valor;
}

int main() {

    int N, K;

    // Primeiro perguntamos quantas crianças vão participar
    printf("Digite a quantidade de criancas: ");
    scanf("%d", &N);

    // Depois perguntamos de quantas em quantas passagens alguém será eliminado
    printf("Digite o valor de K: ");
    scanf("%d", &K);

    // Verificamos se os valores digitados estão corretos
    if (N < 1 || N > MAX || K < 1) {
        printf("Valores invalidos!\n");
        return 0;
    }

    // Colocamos todas as crianças na fila, começando pelo número 1
    for (int i = 1; i <= N; i++) {
        enfileirar(i);
    }

    printf("\nOrdem de eliminacao:\n");

    // Vamos repetir a brincadeira até ficar apenas uma criança
    while (quantidade > 1) {

        // A batata passa por K-1 crianças antes de alguém sair
        for (int i = 1; i < K; i++) {

            // Quem recebe a batata vai para o final da fila
            int crianca = desenfileirar();
            enfileirar(crianca);
        }

        // A próxima criança é eliminada e não volta mais para a fila
        int eliminada = desenfileirar();

        // Mostramos quem acabou de sair da brincadeira
        printf("%d ", eliminada);
    }

    // Quando sobra apenas uma criança, ela ganha a brincadeira
    int vencedora = desenfileirar();

    printf("\n\nA crianca vencedora e: %d\n", vencedora);

    return 0;
}
