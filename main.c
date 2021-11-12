#include <stdio.h>

int main(void){
  int decimal;
  printf("10進数を入力してください\n");
  scanf("%d", &decimal);

  int binary, calc;
  binary = 0;
  calc = 1;

  while (decimal > 0){
    binary = binary + (decimal % 2) * calc;
    decimal = decimal / 2;
    calc = calc * 10;
  }
  printf("%d", binary);
}
