#include <stdio.h>

int main(){
int x, y, *p;
y = 0; //0 --- 1
p = &y; //0 --- 1
x = *p; //0 --- 4
x = 4; 
(*p)++; //0+1 --- 1
--x; // 4-1 --- 3
(*p) += x; // 1+3--- 4

printf("%d %d %d", x,y,*p); //x=3, y=4 e *p=4

return 0;
}
