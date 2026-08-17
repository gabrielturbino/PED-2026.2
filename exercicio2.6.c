//exercicio 2.6//

#include <stdio.h>

int main ()
{
    int ano;
    
    printf("Digite o ano que deseja identificar: ");
    scanf("%d", &ano);
    
    //&& e, || ou, != diferente//
    if ((ano % 4 == 0 && ano % 100 != 0) || (ano % 400 == 0)){
        printf("O ano %d é bissexto.",ano);  
    }
    else {
        printf("O ano %d não é bissexto.",ano);
    }
    
    
    return 0;
}