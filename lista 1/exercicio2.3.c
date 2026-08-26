//exercicio 2.3//

#include <stdio.h>

int main()
{
        int n1,n2,n3;
        
        printf("Digite o primeiro número: ");
        scanf("%d", &n1);
        
        printf("Digite o segundo número: ");
        scanf("%d", &n2);
        
        printf("Digite o terceiro número: ");
        scanf("%d", &n3);
        
        if (n1 > n2 && n1 > n3){
            printf("\nO número %d é o maior.",n1); 
        }
        else if (n2 > n1 && n2 > n3){
            printf("\nO número %d é o maior.", n2); 
        }
        else{
            printf("\nO número %d é o maior.", n3);
        }
    
   return 0;
}
