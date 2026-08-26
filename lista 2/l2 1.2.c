//lista 2 exercicio 1.2//

#include <stdio.h>

int fat(int n){
    if (n == 1) return 1;
    else return n * fat(n-1);
}

int main(){
    int n;
    printf("Digite um número para saber seu fatorial: ");
    scanf("%d", &n);
    
    printf("\nO fatorial do número %d é: %d", n, fat(n));
    
    return 0;
}
//considerando a seguir a execução usando a entrada 7
//Digite um número para saber seu fatorial: 7
//O fatorial do número 7 é: 5040

//segue o fluxo da pilha de execução
//fat(1) : retorna 1 ao chegar no caso base
//fat(2) : n * fat(1) = 2*1=2
//fat(3) : n * fat(2) = 3*2=6
//fat(4) : n * fat(3) = 4*6=24
//fat(5) : n * fat(4) = 5*24=120
//fat(6) : n * fat(5) = 6*120=720
//fat(7) : n * fat(6) = 7*720=5040
//retornando para o main 5040
