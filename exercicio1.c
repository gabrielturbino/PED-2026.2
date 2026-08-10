//exercicio 1 da apostila//

#include <stdio.h> //scanf, printf

int main(){
        
        int n1;
        printf("Digite o primeiro número: ");
        scanf("%d", &n1);
        
        int n2;
        printf("Digite o segundo número: ");
        scanf("%d", &n2);
        
        int soma = n1+n2;
        printf("A soma de %d + %d = %d", n1, n2, soma);
    
    return 0;
        
}