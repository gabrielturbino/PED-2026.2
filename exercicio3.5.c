//exercicio 3.5//

#include <stdio.h>

int main(){
        
        int n,i = 1,cont = 0;//10
        
        printf("Digite um número para saber se ele é primo: ");
        scanf("%d",&n);
        
        while (i < n-1){
            i += 1;//2
            if (n % i == 0){
                printf("\nO número %d não é primo",n);
                break;
            }
        }
        if (i == n-1){
            printf("\nO número %d é primo",n);
        }
    
    return 0;
}