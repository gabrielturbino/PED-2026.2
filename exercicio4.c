//exercicio 4 da apostila//

#include <stdio.h>
#include <math.h>

int main() {
    
        float raio;
        printf("Digite o raio do círculo que deseja saber a área: ");
        scanf("%f", &raio);
        
        float area = M_PI * (raio*raio); //pode usar M_PI * pow(raio, 2) ou seja potencia do raio elevado a 2//
        printf("Um circulo com %.2f de raio tem %.2f de área",raio, area);
        
    
    return 0;
}
