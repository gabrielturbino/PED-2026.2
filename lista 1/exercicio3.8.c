//exercicio 3.8//

#include <stdio.h>

int main()
{
    int n, i = 0;
    int quantia;
    char tipo;
    int total_cobaias = 0;
    int total_coelhos = 0;
    int total_ratos = 0;
    int total_sapos = 0;
    
    printf("Digite a quantidade de testes que deseja realizar: ");
    scanf("%d", &n); //o valor do n muda//

    while (i < n) {
        printf("\nDigite a quantia e o tipo (C, R ou S): ");
        // O espaco antes de %c e fundamental para ignorar o Enter 
        scanf("%d %c", &quantia, &tipo); //salva ambos a quantia e o tipo
        
        total_cobaias += quantia; 

        if (tipo == 'C' || tipo == 'c') {
            total_coelhos += quantia;
        } else if (tipo == 'R' || tipo == 'r') {
            total_ratos += quantia;
        } else if (tipo == 'S' || tipo == 's') {
            total_sapos += quantia;
        }

        i++; // Incrementa o contador//
    } 
    
    //percentuais//
    float p_coelhos = (float)total_coelhos / total_cobaias * 100;
    float p_ratos = (float)total_ratos / total_cobaias * 100;
    float p_sapos = (float)total_sapos / total_cobaias * 100;

    printf("\n--- RESULTADO FINAL ---\n");
    printf("Total: %d cobaias\n", total_cobaias);
    printf("Total de coelhos: %d\n", total_coelhos);
    printf("Total de ratos: %d\n", total_ratos);
    printf("Total de sapos: %d\n", total_sapos);
    printf("Percentual de coelhos: %.2f %%\n", p_coelhos);
    printf("Percentual de ratos: %.2f %%\n", p_ratos);
    printf("Percentual de sapos: %.2f %%\n", p_sapos);

    return 0;
}
