//exercicio 2.5//

#include <stdio.h>

int main ()
{
    int mes;
    
    printf("Digite número do mês que deseja identificar: ");
    scanf("%d", &mes);
    
    switch(mes){
        case 1: 
        printf("O mês representado pelo número %d é janeiro",mes);
        break;
        
        case 2: 
        printf("O mês representado pelo número %d é fevereiro",mes);
        break;
        
        case 3: 
        printf("O mês representado pelo número %d é março",mes);
        break;
        
        case 4: 
        printf("O mês representado pelo número %d é abril",mes);
        break;
        
        case 5:
        printf("O mês representado pelo número %d é maio",mes);
        break;
        
        case 6: 
        printf("O mês representado pelo número %d é junho",mes);
        break;
        
        case 7:
        printf("O mês representado pelo número %d é julho",mes);
        break;
        
        case 8: 
        printf("O mês representado pelo número %d é agosto",mes);
        break;
        
        case 9: 
        printf("O mês representado pelo número %d é setembro",mes);
        break;
        
        case 10: 
        printf("O mês representado pelo número %d é outubro",mes);
        break;
        
        case 11: 
        printf("O mês representado pelo número %d é novembro",mes);
        break;
        
        case 12: 
        printf("O mês representado pelo número %d é dezembro",mes);
        break;
        
        default:
        printf("O número digitado está fora do intervalo (1-12)");
        break;
    }
    
    return 0;
}
