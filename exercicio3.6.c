//exercicio 3.6//

#include <stdio.h>

int main(){
        
        int n, i = 0,fat = 0;
        
        printf("Digite um número não negativo para saber o fatorial: ");
        scanf("%d",&n);
        
        if (n < 0){
            printf("o número não pode ser negativo");
        }
        else if (n == 0){
            printf("o resultado do fatorial é 1");
            
        } else {
            fat = n;
            for (i = n-1; i > 0; i--){
                fat *= i;
            }
        }
        printf("\n O resultado do fatorial é: %d",fat);
    
    return 0;
}