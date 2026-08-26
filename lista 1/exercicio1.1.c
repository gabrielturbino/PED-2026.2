//exercicio 1 da apostila//

#include <stdio.h> // importa funcionalidades de input e output padrão como o scanf e printf, o inport(include) de biblioteca é sempre precedido de .h//

int main(){
        
        int n1, n2, soma; //é necessário declarar as variaveis logo após o main e antes de usar o scanf//
        
        printf("Digite o primeiro número: "); //o print deve vir antes do scanf(input) porque diferente do python o scanf só vai ler um valor e não vai printar nada na tela//
        scanf("%d", &n1); //e preciso colocar o tipo do dado no caso o %d é decimal e salvar no espaço da memoria referente (n1 nesse caso), usando &, se for string não é necessário//
        
        printf("Digite o segundo número: ");
        scanf("%d", &n2);
        
        soma=n1+n2;
        printf("A soma de %d + %d = %d", n1, n2, soma); 
    
    return 0;
        
}
