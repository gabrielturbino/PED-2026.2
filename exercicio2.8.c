//exercicio 2.8//

#include <stdio.h>

int main ()
{
    float n1,n2,resultado;
    char operação;
    
    printf("Digite o primeiro número para a operação: ");
    scanf("%f", &n1);
    
    printf("Qual a operação que deseja realizar?: (+ - * /)");
    scanf(" %c", &operação);
    
    printf("Digite o segundo número para a operação: ");
    scanf("%f", &n2);
    
    switch(operação){
        case '+':
            resultado = n1 + n2;
            printf("A soma: %.2f + %.2f = %.2f.",n1,n2,resultado);
            break;
        
        case '-':
            resultado = n1 - n2;
            printf("A subtração: %.2f - %.2f = %.2f.",n1,n2,resultado);
            break;
        
        case '*':
            resultado = n1 * n2;
            printf("A divisão: %.2f * %.2f = %.2f.",n1,n2,resultado);
            break;
            
        case '/':
            if (n2 == 0){
                printf("Não é possível dividir por zero.");
            } else {
                resultado = n1 / n2;
                printf("A divisão: %f / %f = %f.",n1,n2,resultado);
            }   
            break;
        }
        
    return 0;
}