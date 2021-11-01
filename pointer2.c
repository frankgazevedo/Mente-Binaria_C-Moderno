#include <stdio.h>
#include <stdlib.h>

// char *argv[] ≃ char **argv => ponteiro de ponteiro
int main(int argc, char *argv[], char *envp[]){
  
  puts("\nSobre Ponteiros que apontam para ESPAÇOS NOMINAIS da Memória (VARIÁVEIS)");

  int i = 10;

  printf("\nConteúdo de i: %d\nEndereço de i: %p\nEspaço alocado em memória para i (em bytes): %zu\n", i, &i, sizeof i);

  int *p = NULL; // Recomenda-se inicializar o ponteiro, mesmo que seja com NULL.
  // Por ser um ponteiro, o conteúdo de p sempre será um endereço, daí a utilização do especificador de formato %p. 
  // Todavia, se o objetivo for consultar o conteúdo apontado pelo ponteiro, utilizando-se o operador * [indireção], deve-se utilizar o 
  // especificador de formato do conteúdo apontado.
  printf("\nConteúdo do ponteiro p: %p\nEndereço do ponteiro p (&p): %p\nEspaço alocado em memória para o ponteiro p (em bytes): %zu\n", p, &p, sizeof p);

  puts("\nPassando o endereço de i para o ponteiro p (p = &i)");

  p = &i;

  printf("\nConteúdo do ponteiro p (&i): %p\nConteúdo apontado pelo ponteiro p (*p): %d\n", p, *p);

  puts("\nAlterando o conteúdo de i através do ponteiro p (*p = 15)");

  *p = 15;

  printf("\nConteúdo de i: %d\n", i);

  printf("\nConteúdo de i (com o operador de indireção *p): %d\n", *p);

  puts("\nSobre Ponteiros que apontam para Espaços NÃO Nominais da Memória: MALLOC e CALLOC");

  puts("\nDeclarando um ponteiro j para int, apontando-o para NULL ('\\0'): int *j = NULL;");

  int *j = NULL;

  puts("\nAlocando um espaço na memória (malloc) suficiente para armazenar um int (sizeof (int)).\nMalloc retorna um ponteiro (endereço na memória) que é armazenado no ponteiro j\nj = malloc (sizeof (int));");

  j = malloc(sizeof (int)); // Alocando um espaço na memória (malloc) suficiente para armazenar um int. Malloc retorna um ponteiro (endereço na memória) que é armazenado no ponteiro j.

  puts("\nAlterando o conteúdo do espaço de memória reservado por malloc e apontado pelo ponteiro j (*j = 9)");

  *j = 9;

  printf("\nConteúdo de j (que é o endereço retornado por malloc): %p\n", j); // endereço retornado por malloc

  printf("\nConteúdo apontado pelo ponteiro j (com o operador de indireção *j): %d\n", *j);

  free(j);

  return 0;
}
