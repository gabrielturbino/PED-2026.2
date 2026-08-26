//exercicio 4.2//

#include <stdio.h>

void maior(int n1, int n2, int n3) {
    int max = n1;
    
    if (n2 > max) {
        max = n2;
    }
    if (n3 > max) {
        max = n3;
    }
    printf("O maior valor e: %d\n", max);
}

int main() {
    int v1, v2, v3;

    printf("Digite tres valores inteiros: ");
    scanf("%d %d %d", &v1, &v2, &v3);
    maior(v1, v2, v3);

    return 0;
}
