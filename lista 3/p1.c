#include <stdio.h>

int main(){
int i = 3,j = 5; //variaveis declaradas tipo int

int *p, *q; //criados dois ponteiros int
p = &i;
q = &j;

printf("\n%d",*p); //execução padrão
printf("\n%d",*q);

p==&i; // primeira checagem

printf("\n%d",*p); //p continua sendo o valor de i, ou seja 3==3

*p-*q; //segunda checagem

printf("\n%d",*p-*q); //os valores dos ponteiros *p(3) - *p(5) = -2

*p**q; //terceira checagem

printf("\n%d",*p**q); //os valores dos ponteiros *p(3) * *p(5) = 15

return 0;
}
