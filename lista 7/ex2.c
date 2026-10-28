
#include <stdio.h>
#include <string.h>

// Inclua o arquivo onde estão declaradas as funções da pilha.
// Exemplo: #include "pilha.h"

int main() {
    char expressao[1000];

    // Lê a expressão digitada pelo usuário.
    printf("Digite uma expressao: ");
    fgets(expressao, sizeof(expressao), stdin);

    // Cria uma pilha para armazenar os caracteres de abertura.
    // A pilha deve ser do tipo char, pois guardará (, [ e {.
    Pilha p;
    inicializa_pilha(&p);

    // Percorre a expressão caractere por caractere.
    for (int i = 0; expressao[i] != '\0'; i++) {
        char c = expressao[i];

        // Se encontrar uma abertura, empilha o caractere.
        if (c == '(' || c == '[' || c == '{') {
            push(&p, c);
        }

        // Se encontrar um fechamento, verifica se existe
        // uma abertura correspondente na pilha.
        else if (c == ')' || c == ']' || c == '}') {

            // Se a pilha estiver vazia, não existe abertura
            // correspondente para este fechamento.
            if (pilha_vazia(&p)) {
                printf("Expressao NAO balanceada!\n");
                return 0;
            }

            // Remove a última abertura que foi empilhada.
            char topo = pop(&p);

            // Verifica se os tipos de abertura e fechamento combinam.
            if ((c == ')' && topo != '(') ||
                (c == ']' && topo != '[') ||
                (c == '}' && topo != '{')) {

                printf("Expressao NAO balanceada!\n");
                return 0;
            }
        }
    }

    // Se ainda houver aberturas na pilha, faltaram fechamentos.
    if (!pilha_vazia(&p)) {
        printf("Expressao NAO balanceada!\n");
    } else {
        // Se a pilha estiver vazia, todos os símbolos combinaram.
        printf("Expressao balanceada!\n");
    }

    return 0;
}

