//exercicio 2.4//

#include <stdio.h>

int main ()
{
    int idade;
    
    printf("Digite a idade que deseja classificar: ");
    scanf("%d", &idade);
    
    if (idade >= 0 && idade <= 11){
    printf("Quem tem %d anos é uma criança.",idade);
    }
    
    else if (idade >= 12 && idade <= 17){
    printf("Quem tem %d anos é um adolescente.",idade);
    }
    
    else if (idade >= 18 && idade <= 59){
    printf("Quem tem %d anos é um adulto.",idade);
    }
    
    else {
    printf("Quem tem %d anos é um idoso.",idade);
    }
    
    return 0;
}