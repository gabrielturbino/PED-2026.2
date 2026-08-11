//exercicio 3 da apostila//

#include <stdio.h> //scanf, printf

int main(){
        
        char aluno[20]; //se não definir o valor precisa definir o tamanho maximo//
        printf("Digite o nome do aluno: ");

        scanf("%s", aluno); //como é string não precisa do &//
        
        float nota1, nota2, nota3; //definição de variaveis do mesmo tipo pode estar na mesma linha//
        printf("Digite a primeira nota: ");
        scanf("%f", &nota1);
        
        printf("Digite a segunda nota: ");
        scanf("%f", &nota2);
        
        printf("Digite a terceira nota: ");
        scanf("%f", &nota3);
        
        float media = (nota1 + nota2 + nota3)/3;
        printf("A media das notas de %s é: %f", aluno, media);
        
    return 0;
        
}
