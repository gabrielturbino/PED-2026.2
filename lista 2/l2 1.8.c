#include <stdio.h>
#include <string.h>

#define true 1
#define false 0

int isPalindromo(char palavra[], int inicio, int fim) {
    printf("%s %d %d\n", palavra, inicio, fim);
    
    if (inicio >= fim) {
        return true;
    } else if (palavra[inicio] == palavra[fim]) {
        return isPalindromo(palavra, inicio + 1, fim - 1);
    } else {
        return false;
    }
}

int main() {
    char palavra[20];
    
    printf("Escolha uma palavra para saber se ela e palindromo: ");
    scanf("%s", palavra);
    
    int resultado = isPalindromo(palavra, 0, strlen(palavra) - 1);
    
    if (resultado == true) {
        printf("A palavra %s é um palindromo!\n",palavra);
    } else {
        printf("A palavra %s não é um palindromo!\n",palavra);
    }
    
    return 0;
}
// PILHA DE EXECUÇÃO PARA "OSSO"
// isPalindromo("osso", 0, 3) : compara 'o' com 'o', são iguais
// isPalindromo("osso", 1, 2) : compara 's' com 's', são iguais
// isPalindromo("osso", 2, 1) : retorna 1 ao chegar no caso base
// retornando para isPalindromo("osso", 1, 2) : retorna 1
// retornando para isPalindromo("osso", 0, 3) : retorna 1
// retornando para o main 1

// PILHA DE EXECUÇÃO PARA "ARARA"
// isPalindromo("arara", 0, 4) : compara 'a' com 'a', são iguais
// isPalindromo("arara", 1, 3) : compara 'r' com 'r', são iguais
// isPalindromo("arara", 2, 2) : retorna 1 ao chegar no caso base
// retornando para isPalindromo("arara", 1, 3) : retorna 1
// retornando para isPalindromo("arara", 0, 4) : retorna 1
// retornando para o main 1

// PILHA DE EXECUÇÃO PARA "ARADA"
// isPalindromo("arada", 0, 4) : compara 'a' com 'a', são iguais
// isPalindromo("arada", 1, 3) : compara 'r' com 'd', são diferentes
// retorna 0
// retornando para isPalindromo("arada", 0, 4) : retorna 0
// retornando para o main 0



