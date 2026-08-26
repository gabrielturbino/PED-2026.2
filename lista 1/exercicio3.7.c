//exercicio 3.7//

#include <stdio.h>

int main()
{
    int n, cont = 0, total = 0;
    float media;
    
    printf("Bem-vindo! Digite numeros para saber a media deles. Digite -1 para encerrar.\n");

    do {
        printf("\nDigite um numero: ");
        scanf("%d", &n);
        
        // Verifica se o numero digitado nao e (-1)//
        if (n != -1) {
            cont++;
            total += n; 
        }
    } while (n != -1);
    
    if (cont > 0) {
        media = (float)total / cont; 
        printf("\nA media dos %d numeros e: %.2f\n", cont, media);
    } else {
        printf("\nNenhum numero valido foi digitado.\n");
    }
    
    return 0;
}
