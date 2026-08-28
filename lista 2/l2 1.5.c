//lista 2 exercicio 1.5//

#include <stdio.h>

int sd(int n){
    if (n < 10) return n;
    else return (n%10) + sd(n / 10);
}

int main(){
    int n;
    printf("Digite um número para saber a soma dos algarismos que ele posssuí: ");
    scanf("%d", &n);
    
    printf("\no número %d ao somar seus algarismos dá: %d.", n, sd(n));
    return 0;
}
//Digite um número para saber a soma dos algarismos que ele posssuí: 987654
//o número 987654 ao somar seus algarismos dá: 39.

// segue o fluxo da pilha de execução
// sd(9) : retorna 9 ao chegar no caso base
// sd(98) : (98%10) + sd(9) = 8+9=17
// sd(987) : (987%10) + sd(98) = 7+17=24
// sd(9876) : (9876%10) + sd(987) = 6+24=30
// sd(98765) : (98765%10) + sd(9876) = 5+30=35
// sd(987654) : (987654%10) + sd(98765) = 4+35=39
// retornando para o main 39





