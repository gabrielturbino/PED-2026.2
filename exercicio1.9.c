//exercicio 9//

#include <stdio.h>

int main()
{
        int valor, nota100, nota50, nota20, nota10, nota5, nota2, nota1;
        
        printf("Digite valor em reais que deseja saber a menor quantidade de cedulas necessárias: ");
        scanf("%d", &valor);
        
        nota100 = valor / 100;
        valor = valor % 100;
    
        nota50 = valor / 50;
        valor = valor % 50;
    
        nota20 = valor / 20;
        valor = valor % 20;
    
        nota10 = valor / 10;
        valor = valor % 10;
    
        nota5 = valor / 5;
        valor = valor % 5;
    
        nota2 = valor / 2;
        valor = valor % 2;
    
        nota1 = valor / 1;
        valor = valor % 1;
    
        printf("%d nota(s) de 100,00\n", nota100);
        printf("%d nota(s) de 50,00\n", nota50);
        printf("%d nota(s) de 20,00\n", nota20);
        printf("%d nota(s) de 10,00\n", nota10);
        printf("%d nota(s) de 5,00\n", nota5);
        printf("%d nota(s) de 2,00\n", nota2);
        printf("%d nota(s) de 1,00\n", nota1);

    return 0;
}
