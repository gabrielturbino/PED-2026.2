#include <stdio.h>

int main () {
    // Vetor de inteiros com 3 valores escolhidos
    int vet[] = {2, 4, 12};

    // %d tenta imprimir o endereço de memória como um número inteiro decimal.
    // %p imprime o endereço de memória no formato hexadecimal correto para ponteiros.
    printf("Resultado com %%d: %d\n", vet); 
    printf("Resultado com %%p: %p\n", vet); 

    /* 
      EXPLICAÇÃO:
      Em C, o nome de um vetor (vet) funciona como um ponteiro constante que aponta 
      para o endereço de memória do seu primeiro elemento (&vet[0]). 
      
      - Com %p: O programa exibe esse endereço no formato padrão da máquina (hexadecimal).
      - Com %d: O programa pega esse mesmo endereço de memória e tenta convertê-lo/interpretá-lo 
        forçadamente como um número inteiro decimal básico.
    */

    return 0;
}

