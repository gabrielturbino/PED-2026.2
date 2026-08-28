//lista 2 exercicio 1.6//

#include <stdio.h>

void inter(int a, int b){ 
    if (a > b) return; 
    
    printf("%d ", a); 
    inter(a + 1, b);
}

int main(){
    int a,b;
    printf("Digite valores de início e fim de uma sequência crescente: ");
    scanf("%d %d", &a, &b);
    
    printf("\nA seqência é: ");
    inter(a,b);
    return 0;
}
// Digite valores de início e fim de uma sequência crescente: 5 10
// A sequência é: 5 6 7 8 9 10

// segue o fluxo da pilha de execução
// inter(5,10) : imprime 5 e chama inter(6,10)
// inter(6,10) : imprime 6 e chama inter(7,10)
// inter(7,10) : imprime 7 e chama inter(8,10)
// inter(8,10) : imprime 8 e chama inter(9,10)
// inter(9,10) : imprime 9 e chama inter(10,10)
// inter(10,10) : imprime 10 e chama inter(11,10)
// inter(11,10) : retorna ao chegar no caso base
// retornando para o main







