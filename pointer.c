#include <stdio.h>

int main(void){
  
  int a[] = {2017, 2018, 2019};

  for (int i = 0; i < 3; i++)
    printf("%d\n", a[i]); 

  printf("O endereço de a[] em memória é: %p\n", a);

  for (int i = 0; i < 3; i++)
    printf("O conteúdo de a[] é: %d\n", *a + i); // Aritmética de Ponteiros

  int i = 2017;

  // declarando um Ponteiro
  int *p;

  // inicializando um Ponteiro
  p = &i;

  printf("Endereço de i em memória SEM ponteiro: %p\n", &i);

  printf("Endereço de i em memória COM ponteiro: %p\n", p);

  printf("Conteúdo de i SEM ponteiro: %d\n", i);

  printf("Conteúdo de i COM ponteiro: %d\n", *p);



  return 0;
}
