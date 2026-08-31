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
    
    printf("\nOs números de 1 a %d somados são: %d", n, somatorio(n));
    
    return 0;
}
//considerando a seguir a execução usando a entrada 7
//Digite um número para somar os números de 1 até ele: 7
//Os números de 1 a 7 somados são: 28

//segue o fluxo da pilha de execução
//somatorio(1) : retorna 1 ao chegar no caso base, impedindo somar números negativos ou o 0
//somatorio(2) : n + somatorio(1) = 2+1
//somatorio(3) : n + somatorio(2) = 3+3
//somatorio(4) : n + somatorio(3) = 4+6
//somatorio(5) : n + somatorio(4) = 5+10
//somatorio(6) : n + somatorio(5) = 6+15
//somatorio(7) : n + somatorio(6) = 7+21
//retornando para o main 28
