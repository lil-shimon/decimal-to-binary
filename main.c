#include <stdio.h>

int main(void){
  int binary = 0;
  int calc = 1;
  int decimal = 24;

  while (decimal > 0){
    binary = binary + (decimal % 2) * calc;
    decimal = decimal / 2;
    calc = calc * 10;
  }
  printf("%d", binary);
}