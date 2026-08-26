//exercicio 3.2//

#include <stdio.h>

int main() {
    
        int soma = 0,n,quant, i = 0;
        
        printf("Digite a quantidade de números que deseja somar: ");
        scanf("%d", &quant);
        
        do {
            printf("Digite um número para somar: ");
            scanf("%d",&n);
            soma += n;
            i ++;
            
        } while (i < quant);
        
        printf("O total da soma de %d número(s) é: %d",quant, soma);
            
    return 0;
}
