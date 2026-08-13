//exercicio 8//

#include <stdio.h>

int main()
{
        int n1, n2;
        printf("Digite o primeiro número: ");
        scanf("%d", &n1);
        
        printf("Digite o segundo número: ");
        scanf("%d", &n2);
        
        n1 = n1 + n2; //a soma dos dois//
        n2 = n1 - n2; //menos o n2 sobra o n1 então o n2 já está com o valor de n1//
        n1 = n1 - n2; //a soma dos dois menos o n2 que agora tem o valor de n1 sobra o n2, então troca completa//
         
        printf("Os números são: %d e %d",n1,n2);

    return 0;
}
