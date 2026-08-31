//lista 2 exercicio 1.9//

#include <stdio.h>

//pilha usando o número 13
// 13/2 = 6(1) como o 13/2 = 6 e 6 > 0 entao guarda o print do resto de 13/2 (1) e roda a função com 6
// 6/2 =3(0) como o 6/2 = 3 e 3 > 0 entao guarda o print do resto de 6/2 (0) e roda a função com 3
// 3/2 = 1(1) como o 3/2 = 1 e 1 > 0 entao guarda o print do resto de 3/2 (1) e roda a função com 1
// 1/2 = 0(1) como a 1/2 < 0 chega ao caso base e printa o resto de 1/2 (1) assim os prints acontecem na ordem correta 13=1101



void dec2bin(int n){ 
    if (n < 0) return;
    if (n / 2 > 0) {
        dec2bin(n / 2);
    }
    printf("%d", n % 2);
}

int main(){
    int n;
    printf("Digite um número inteiro para converter para binário: ");
    scanf("%d", &n);
    
    if (n < 0){
        printf("Use um número maior do que zero.");
    }
    
    dec2bin(n);
    
    return 0;
}
