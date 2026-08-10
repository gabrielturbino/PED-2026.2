//exercicio 2 da apostila//

#include <stdio.h> //scanf, printf

int main(){
        
        float Celsius;
        printf("Digite o valor em graus Celsius para converção: ");
        scanf("%f", &Celsius);
        
        float F = Celsius * 9/5 + 32;
        
        printf("A converção de %.2f graus Celsius para Fahrenheit é: %.2f", Celsius, F);
    
    return 0;
        
}