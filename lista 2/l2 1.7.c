//lista 2 exercicio 1.7//

#include <stdio.h>

void inter(int a, int b){ 
    if (a > b) return; 
    
    printf("%d ", b); 
    inter(a, b - 1);
}

int main(){
    int a,b;
    printf("Digite valores de início e fim de uma sequência decrescente: ");
    scanf("%d %d", &a, &b);
    
    printf("\nA seqência é: ");
    inter(a,b);
    return 0;
}
// Digite valores de início e fim de uma sequência decrescente: 5 10
// A sequência é: 10 9 8 7 6 5

// segue o fluxo da pilha de execução
// inter(5,10) : imprime 10 e chama inter(5,9)
// inter(5,9) : imprime 9 e chama inter(5,8)
// inter(5,8) : imprime 8 e chama inter(5,7)
// inter(5,7) : imprime 7 e chama inter(5,6)
// inter(5,6) : imprime 6 e chama inter(5,5)
// inter(5,5) : imprime 5 e chama inter(5,4)
// inter(5,4) : retorna ao chegar no caso base
// retornando para o main








