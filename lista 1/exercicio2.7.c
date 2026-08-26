//exercicio 2.7//

#include <stdio.h>

int main ()
{
    float lado1,lado2,lado3;
    
    printf("Digite o primeiro lado: ");
    scanf("%f", &lado1);
    
    printf("Digite o segundo lado: ");
    scanf("%f", &lado2);
    
    printf("Digite o terceiro lado: ");
    scanf("%f", &lado3);
    
    if (lado1 + lado2 > lado3 && lado2 + lado3 > lado1 && lado1 + lado3 > lado2){
        if (lado1 == lado2 && lado2 == lado3){
            printf("As medidas apresentadas são de um triângulo equilátero.");
        }
        else if (lado1 == lado2 && lado2 != lado3 || lado1 == lado3 && lado3 != lado2 || lado2 == lado3 && lado3 != lado1){
            printf("As medidas apresentadas são de um triângulo isóceles.");
        }
        else if (lado1 != lado2 && lado1 != lado3 && lado2 != lado3){
            printf("As medidas apresentadas são de um triângulo escaleno.");
        }
    }
    else{
        printf("Os lados representados não formam um triangulo.");
    }
    return 0;
}
