void func(int *px, int *py) {  
      px = py;   
      *py = (*py) * (*px);  
      *px = *px + 2; 
} 
int main () { 
      int x, y; 
      scanf(“%d”,&x);     
      scanf(“%d”,&y);  
      func(&x,&y); 
      printf(“x = %d, y = %d”, x, y);
      return 0;
} 

// No início, x = 5 e y = 6.
// Ao chamar func(&x, &y), px recebe o endereço de x
// e py recebe o endereço de y.
//
// 1. px = py;
//    O ponteiro px passa a guardar o endereço de y.
//    Agora, px e py apontam ambos para y.
//    Os valores das variáveis continuam: x = 5 e y = 6.
//
// 2. *py = (*py) * (*px);
//    O operador * permite aceder ao valor apontado.
//    Como py e px apontam para y, fazemos y = y * y.
//    Assim, y = 6 * 6 = 36.
//    Agora, x = 5 e y = 36.
//
// 3. *px = *px + 2;
//    Como px aponta para y, somamos 2 ao valor de y.
//    Assim, y = 36 + 2 = 38.
//    Agora, x = 5 e y = 38.
//
// No final da função:
//    x = 5, porque nunca foi alterado.
//    y = 38, porque foi multiplicado por si próprio
//        e depois recebeu mais 2.
//    px aponta para y dentro da função.
//    py também aponta para y dentro da função.
//
// Quando a função termina, px e py deixam de existir,
// pois são variáveis locais da função func.
// As variáveis x e y continuam a existir no main().
//
// Saída final:
// x = 5, y = 38
