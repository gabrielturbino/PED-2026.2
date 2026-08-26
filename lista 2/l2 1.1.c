//lista 2 exercicio 1.1//

#include <stdio.h>

int somatorio(int n){
    if (n == 1) return 1;
    else return n + somatorio(n-1);
}

int main(){
    int n;
    printf("Digite um número para somar os números de 1 até ele: ");
    scanf("%d", &n);
    
    printf("Os números de 1 a %d somados são: %d", n, somatorio(n));
    
    return 0;
}
//considerando a seguir a execução usando a entrada 5
//Digite um número para somar os números de 1 até ele: 5
//Os números de 1 a 5 somados são: 15

//segue o fluxo da pilha de execução
//somatorio(1) : retorna 1 ao chegar no caso base, impedindo somar números negativos ou o 0
//somatorio(2) : n + somatorio(1) = 2+1
//somatorio(3) : n + somatorio(2) = 3+3
//somatorio(4) : n + somatorio(3) = 4+6
//somatorio(5) : n + somatorio(4) = 10+5
//retornando para o main 15