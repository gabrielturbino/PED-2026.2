//exercicio 3.4//

#include <stdio.h>

int main(){
        
        int n,i,cont = 0;
        
        printf("Digite um número para saber quantos pares tem entre 1 e o número digitado: ");
        scanf("%d",&n);
        
        for (i = 1; i <= n; i++){
            if (i % 2 == 0){
                cont += 1;
            }
        }
        printf("O número de pares entre 1 e %d é: %d", n,cont);
    
    return 0;
}