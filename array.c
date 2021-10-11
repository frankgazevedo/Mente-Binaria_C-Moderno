#include <stdio.h>
#include <limits.h> // Permite utilizar as denifições de Limites dos tipos em C
#include <stdint.h> // Permite utilizar definições default para o tipo INT independentemente da arquitetura do usuário 
#include <stdlib.h> // Permite utilizar o tipo size_t

int main(void){
  
  char c[3];

  printf("O tamanho de c é: %zu Bytes\n", sizeof c);
  printf("O número de elementos de c é: %zu Bytes\n", sizeof c / sizeof c[0]); // outra implementação: sizeof c / sizeof (int)

  c[0] = 'A';
  c[1] = 0x42;
  c[2] = 67;
  
  // imprimindo como inteiros
  printf("O elemento 0 de c é: %d\n", c[0]); // 65
  printf("O elemento 1 de c é: %d\n", c[1]); // 66
  printf("O elemento 2 de c é: %d\n", c[2]); // 67
  
  // imprimindo como caracteres [ASCII]
  printf("O elemento 0 de c é: %c\n", c[0]); // A
  printf("O elemento 1 de c é: %c\n", c[1]); // B
  printf("O elemento 2 de c é: %c\n", c[2]); // C
  
  // imprimindo os endereços de cada elemento de C em memória
  // o especificador de formato %p é utilizado para imprimir endereços de memória
  printf("O endereço do array c em memória é: %p\n", c); // c
  printf("O endereço do array &c em memória é: %p\n", &c); // endereço de c
  printf("O endereço do primeiro elemento do array c em memória é: %p\n", &c[0]); // endereço do primeiro elemento
  printf("O endereço do segundo elemento do array c em memória é: %p\n", &c[1]); // endereço do segundo elemento

  return 0;
}
