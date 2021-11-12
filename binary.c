#include <stdio.h>

int main() {
	int binary;
	printf("2進数を入力してください。\n");
	scanf("%d", &binary);

	int decimal,number;
	decimal = 0;
	number = 1;

  while(binary > 0){
    decimal = decimal + ( binary % 10 ) * number;
    binary = binary / 10;
	  number = number * 2;
  }


	printf("%d", decimal);

	return 0;
}
