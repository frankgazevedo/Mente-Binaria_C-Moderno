#include <stdio.h>
#include <limits.h> // Permite utilizar as denifições de Limites dos tipos em C
#include <stdint.h> // Permite utilizar definições default para o tipo INT independentemente da arquitetura do usuário 
#include <stdlib.h> // Permite utilizar o tipo size_t

int main(void){
  
  int i = INT_MAX;

  printf("O tamanho de i(int) é: %zu Bytes\n", sizeof i);
  printf("O tamanho do tipo int é: %zu Bytes\n", sizeof(int));
  printf("O valor de i: %d\n", i);

  // o que acontece se o valor máximo receber uma unidade? pulamos para o valor mínimo (-INT_MAX - 1)
  i ++;
  printf("O valor de i: %d\n", i);

  unsigned int j = UINT_MAX;
  printf("O valor de j: %u\n", j);

  // Define um UNSIGNED INT de 32bits independemente da arquitetura do usuário
  uint16_t k = USHRT_MAX;
  printf("O tamanho de k (uint16_t) é: %zu Bytes\n", sizeof k);
  printf("O tamanho do tipo uint16_t é: %zu Bytes\n", sizeof(uint16_t));
  printf("O valor de k: %u\n", k);

  // Define um UNSIGNED INT de 32bits independemente da arquitetura do usuário
  size_t w = 2;
  printf("O tamanho de w (size_t) é: %zu Bytes\n", sizeof w);
  printf("O tamanho do tipo size_t é: %zu Bytes\n", sizeof(size_t));
  printf("O valor de w: %zu\n", w);
  
  // Utilizando REGISTER. Essa palavra reservada informa ao compilador que a variável em seguida
  // deve ser alocada num registrador, se possível (depende da microarquitetura do usuário).
  // Normalmente utilizado em contadores.
  register int y = 0;

  printf("O valor de y: %d\n", y);
 
  return 0;
}
