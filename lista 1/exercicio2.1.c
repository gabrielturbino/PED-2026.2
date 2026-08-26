//exercicio 2.1//

#include <stdio.h>

#define PAR "par" //A váriavel fixa deve receber um valor e duas não podem ser declaradas na mesma linha//
#define IMPAR "ímpar"

int main()
{
        int num;
        
        printf("Digite um número para saber se ele é par ou impar: ");
        scanf("%d", &num);
        
        if (num %2 == 0) {
            printf("O número %d é: %s", num, PAR); //como a variavel já recebeu o valor pode chamar ela//
        }
        else {
            printf("O número %d é: %s", num, IMPAR); //também poderia usar direto o if tal coisa o num é par else o num é ímpar//
        }
    
   return 0;
}
