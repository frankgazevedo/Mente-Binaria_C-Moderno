#include <stdio.h>
#include <limits.h> // Permite utilizar as denifições de Limites dos tipos em C
#include <stdint.h> // Permite utilizar definições default para o tipo INT independentemente da arquitetura do usuário 
#include <stdlib.h> // Permite utilizar o tipo size_t

int main(void){
  
  float f = 1.0;

  printf("O tamanho de f (float) é: %zu Bytes\n", sizeof f);
  printf("O tamanho do tipo float é: %zu Bytes\n", sizeof(int));
  printf("O valor de f: %.2f\n", f);

  // float ff = 3e2; // ff = 3 * 10^2 => notação cinetífica de base 10 (Expoente/Mantissa)

  // printf("O valor de ff: %.2f\n", ff);
 
  return 0;
}
