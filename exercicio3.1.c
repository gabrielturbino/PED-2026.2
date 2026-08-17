//exercicio 3.1//

#include <stdio.h>

int main() {
        int n, i, passo;
        
        printf("Digite um número, para contar de 1 até o número escolhido: ");
        scanf("%d", &n);
        
        //caso verdadeiro o valor após o ? senão após os://
        passo = (n >= 1) ? 1 : -1;
        
        for (i = 1; (passo == 1) ? (i <= n) : (i >= n); i += passo){
            printf("\n %d",i);
        }
            
    return 0;
}