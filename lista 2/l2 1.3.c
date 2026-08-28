//lista 2 exercicio 1.3//

#include <stdio.h>

int seq(int n){
    if (n == 1) return 1;
    else return 3 * seq(n - 1);
}

int main(){
    int n;
    printf("Digite qual número da seqência deseja saber: ");
    scanf("%d", &n);
    
    printf("\nNa seqência o %dº número é: %d", n, seq(n));
    
    return 0;
}
// considerando a execução usando a entrada 6
// Digite qual número da sequência deseja saber: 6
// Na sequência o 6º número é: 243

// segue o fluxo da pilha de execução
// seq(1) : retorna 1 ao chegar no caso base
// seq(2) : 3 * seq(1) = 3*1=3
// seq(3) : 3 * seq(2) = 3*3=9
// seq(4) : 3 * seq(3) = 3*9=27
// seq(5) : 3 * seq(4) = 3*27=81
// seq(6) : 3 * seq(5) = 3*81=243
// retornando para o main 243

