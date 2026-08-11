//exercicio 2 da apostila//

#include <stdio.h> //scanf, printf

int main(){
        
        float Celsius;
        printf("Digite o valor em graus Celsius para converção: ");
        scanf("%f", &Celsius);
        
        float F = Celsius * 9/5 + 32; //caso tivesse uma operação com prioridade que mudaria a ordem de execução esperada é necessário usar ()//
        
        printf("A converção de %.2f graus Celsius para Fahrenheit é: %.2f", Celsius, F); //lembrar do ; no final de cada linha//
    
    return 0;
        
}
