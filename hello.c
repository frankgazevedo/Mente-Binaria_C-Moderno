#include <stdio.h>

int main(void){
  int ret = 0;

  // storing the printf function return into a variable 
  ret = printf("Hello World!\n");
  printf("Retorno da printf() anterior: %d\n", ret);

  // print in decimal format
  printf("%d - %d - %d - %d\n", ret, 10, 0xa, 'A');

  // print in hexadecimal format
  printf("%x - %x - %x - %x\n", ret, 10, 0xa, 'A');

  return 0;
}
