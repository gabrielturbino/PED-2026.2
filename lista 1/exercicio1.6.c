//exercicio 6//

#include <stdio.h>

int main()
{
        float kmcon, km, valcomb, custo; 
        int comp; //comp não inclui ela porque no exercicio pede pessoas que vão viajar com ela//
        
        printf("Digite quantos km o carro percorre por litro de combustível: ");
        scanf("%f", &kmcon);
        
        printf("Digite a quantidade de km necessários para completar a viagem: ");
        scanf("%f", &km);
        
        printf("Digite o valor do combustível por litro do local onde vai abastecer: ");
        scanf("%f", &valcomb);
        
        printf("Digite o número de pessoas que participaram da viagem com você e vão dividir a conta: ");
        scanf("%d", &comp);
        
        custo = ((km/kmcon)*valcomb)/(1+comp); //o 1 representa a Giselda para a conta ficar correta//
        printf("O valor da viagem dividido é de R$%.2f para cada um", custo);
        
    return 0;
}
