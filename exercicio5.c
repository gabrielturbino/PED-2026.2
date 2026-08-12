//exercicio 5//

#include <stdio.h>

int main()
{
        int num;
        printf("Digite o número em segundos que deseja converter: ");
        scanf("%d", &num);
        
        int hora = num/3600; //por ser int vai ignorar o resto//
        int minutos = (num % 3600)/60; //vai usar somente o resto do calculo da hora para os minutos//
        int segundos = num % 60;
        
        printf("%d convertidos vira: %d horas, %d minutos e %d segundos.", num,hora,minutos,segundos);
        
    

    return 0;
}