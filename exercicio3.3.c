//exercicio 3.3//

#include <stdio.h>

int main() {
    
        int n,resultado,i;
        
        printf("Digite o número que deseja saber a tabuada: ");
        scanf("%d", &n);
        
        for (i = 0; i <= 10; i++){
            resultado = n * i;
            
            printf("%d x %d = %d\n", n, i, resultado);
        }
            
    return 0;
}