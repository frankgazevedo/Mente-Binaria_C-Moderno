#include <stdio.h>
#include <stdbool.h>

int main(void){
  bool b;

  b = false;

  printf("O tamanho de b (bool) é: %zu Bytes \n", sizeof b);
  
  //não existe um especificador de formato próprio para imprimir o tipo BOOL. Então, pode-se utilizar %i ou %d
  printf("O valor de b (bool) é: %i\n", b);

  b = true;
  printf("O valor de b (bool) é: %d\n", b);
  
  return 0;
}
