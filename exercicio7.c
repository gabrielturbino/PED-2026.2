//exercicio 7//

#include <stdio.h>

int main()
{
        int n1;
        printf("Digite o primeiro número: ");
        scanf("%d", &n1);
        
        int n2;
        printf("Digite o segundo número: ");
        scanf("%d", &n2);
        
        int temp; //usando uma variavel para armazenar temporariamente o valor de um dos números//
        temp = n1;
        n1=n2;
        n2=temp;
        
        printf("Os números são: %d e %d",n1,n2);

    return 0;
}