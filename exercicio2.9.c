//exercicio 2.9//

#include <stdio.h>
#include <stdlib.h>

int main() {
        int iris1_a1=123, iris1_a2=456, iris1_a3=789;
        int iris2_a1=987, iris2_a2=654, iris2_a3=321;
        int iris3_a1=111, iris3_a2=222, iris3_a3=333;
        int iris4_a1=444, iris4_a2=555, iris4_a3=666;
        
        int l1,l2,l3;
    
        printf("INICIANDO VERIFICAÇÃO BIOMETRICA.");
        printf("\nPreencha o primeiro valor: ");
        scanf("%d", &l1);
        
        printf("Preencha o segundo valor: ");
        scanf(" %d", &l2);
        
        printf("Digite o terceiro valor: ");
        scanf("%d", &l3);
        
        if (abs(l1 - iris1_a1) <= 5 && abs(l2 - iris1_a2) <= 5 && abs(l3 - iris1_a3) <= 5){
            printf("Usuário 1 autenticado.");
        }
        
        else if (abs(l1 - iris2_a1) <= 5 && abs(l2 - iris2_a2) <= 5 && abs(l3 - iris2_a3) <= 5){
            printf("Usuário 2 autenticado.");
        }
        
        else if (abs(l1 - iris3_a1) <= 5 && abs(l2 - iris3_a2) <= 5 && abs(l3 - iris3_a3) <= 5){
            printf("Usuário 3 autenticado.");
        }
        
        else if (abs(l1 - iris4_a1) <= 5 && abs(l2 - iris4_a2) <= 5 && abs(l3 - iris4_a3) <= 5){
            printf("Usuário 4 autenticado.");
        }
        
        else {
            printf("Usuário não cadastrado.");
        }
            
    return 0;
}