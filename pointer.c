#include <stdio.h>

int main(void){
  
  int a[] = {2017, 2018, 2019};

  for (int i = 0; i < 3; i++)
    printf("a[%d] = %d\n", i, a[i]); 

  printf("\nO endereço de a[] em memória é: %p\n", a);

  // Modo 1: método usual
  printf("\nModo 1: método \"usual\"\n");
  for (int i = 0; i < 3; i++)
    printf("O conteúdo de a[%d] é: %d\n", i, a[i]);

  // Modo 2: métod que utiliza Aritmética de Ponteiros
  printf("\nModo 2: método que utiliza Aritmética de Ponteiros\n");
  for (int i = 0; i < 3; i++)
    printf("O conteúdo de a[%d] é: %d\n", i,  *a + i); // Aritmética de Ponteiros

  printf("\nDeclarando uma variável: int i; \n");
  int i = 2017;

  printf("\nDeclarando um Ponteiro: int *p;\n");
  int *p;

  printf("\nInicializando um Ponteiro: p = &i;\n");
  p = &i;

  printf("\n");

  printf("Endereço de i em memória SEM ponteiro [&i]: %p\n", &i);

  printf("Endereço de i em memória COM ponteiro [%%p]: %p\n", p);

  printf("Conteúdo de i SEM ponteiro [i]: %d\n", i);

  printf("Conteúdo de i COM ponteiro [*i]: %d\n", *p);

  printf("\nDemonstrando formas diferentes de \"alocar\" Strings\n");

  char s[] = "Frank";

  char *t = "Frank";

  char u[] = { 0x46, 0x72, 0x61, 0x6e, 0x6b, 0x00 };

  puts(s);

  puts(t);

  puts(u);

  return 0;
}
