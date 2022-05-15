#include <stdio.h>

int main(void) {

  float x; 
  float y;

  printf("Digite um número:\n");
  scanf("%f" , &x);
  printf("Digite outro número:\n");
  scanf("%f" , &y);
  
  printf("Selecione uma opção de cálculo para realizar:\n(1)Soma;\n(2)Subtração;\n(3)Multiplicação;\n(4)Divisão;\n");
  int op;
  scanf("%d" , &op);

  float res;
  switch(op){
    case 1: res= x+y; break;
    case 2: res= x-y; break;
    case 3: res= x*y; break;
    case 4: res= x/y; break;
  }

  printf("%0.2f" , res);
  
  return 0;
}