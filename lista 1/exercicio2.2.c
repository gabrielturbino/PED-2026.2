//exercicio 2.1//

#include <stdio.h>

int main()
{
        int num;
        
        printf("Digite um número para saber se ele positivo, negativo ou igual a zero: ");
        scanf("%d", &num);
        
        if (num < 0) {
            printf("\nO número %d é negativo.",num); 
        }
        else if (num > 0) {
            printf("\nO número %d é positivo.", num); 
        }
        else {
            printf("\nO número %d é igual a 0", num);
        }
    
   return 0;
}
