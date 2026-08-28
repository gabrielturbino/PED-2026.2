//lista 2 exercicio 1.4//

#include <stdio.h>

int qd(int n){
    if (n < 10) return 1;
    else return 1 + qd(n / 10);
}

int main(){
    int n;
    printf("Digite um número para saber quantos algarismos ele posssuí: ");
    scanf("%d", &n);
    
    printf("\n%d posssuí: %d algarismos.", n, qd(n));
    
    return 0;
}
// Digite um número para saber quantos algarismos ele possui: 987654 
// 987654 possui: 6 algarismos.

// segue o fluxo da pilha de execução
// qd(9) : retorna 1 ao chegar no caso base
// qd(98) : 1 + qd(9) = 1+1=2
// qd(987) : 1 + qd(98) = 1+2=3
// qd(9876) : 1 + qd(987) = 1+3=4
// qd(98765) : 1 + qd(9876) = 1+4=5
// qd(987654) : 1 + qd(98765) = 1+5=6
// retornando para o main 6



