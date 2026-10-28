#include <stdio.h>
#define MAX 1000

// Estrutura da pilha: guarda caracteres.
typedef struct {
    char dados[MAX];
    int topo;
} Pilha;

// Inicializa a pilha como vazia.
void inicializa_pilha(Pilha *p) {
    p->topo = -1;
}

// Retorna 1 se a pilha estiver vazia e 0 caso contrário.
int pilha_vazia(Pilha *p) {
    return p->topo == -1;
}

// Adiciona um caractere no topo da pilha.
void push(Pilha *p, char c) {
    if (p->topo < MAX - 1) {
        p->topo++;
        p->dados[p->topo] = c;
    }
}

// Remove e retorna o caractere do topo.
// Por segurança, só chamamos pop depois de verificar
// se a pilha não está vazia.
char pop(Pilha *p) {
    return p->dados[p->topo--];
}

int main() {
    char expressao[MAX];
    Pilha p;

    // Lê a expressão digitada.
    printf("Digite uma expressao: ");
    fgets(expressao, sizeof(expressao), stdin);

    // Inicializa a pilha antes de usá-la.
    inicializa_pilha(&p);

    // Percorre a expressão caractere por caractere.
    for (int i = 0; expressao[i] != '\0'; i++) {
        char c = expressao[i];

        // Se for abertura, guarda na pilha.
        if (c == '(' || c == '[' || c == '{') {
            push(&p, c);
        }

        // Se for fechamento, verifica se combina.
        else if (c == ')' || c == ']' || c == '}') {

            // Não pode retirar de uma pilha vazia.
            if (pilha_vazia(&p)) {
                printf("Nao balanceada: fechamento sem abertura.\n");
                return 0;
            }

            // Retira a última abertura armazenada.
            char abertura = pop(&p);

            // Confere se os símbolos correspondem.
            if ((c == ')' && abertura != '(') ||
                (c == ']' && abertura != '[') ||
                (c == '}' && abertura != '{')) {

                printf("Nao balanceada: fechamento na ordem errada.\n");
                return 0;
            }
        }
    }

    // Se sobraram aberturas, a pilha não estará vazia.
    if (pilha_vazia(&p)) {
        printf("Balanceada!\n");
    } else {
        printf("Nao balanceada: sobrou uma abertura.\n");
    }

    return 0;
}

