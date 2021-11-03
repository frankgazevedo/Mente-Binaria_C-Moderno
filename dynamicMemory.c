#include <stdio.h>
#include <stdlib.h> // Necessária para MALLOC e REALLOC
#include <string.h> // Necessária para MEMSET

// Ao utilizarmos alocação dinâmica de memória, é recomendável utilizar alguma técnicao de verificação para malloc.
// Faremos testes com as duas possibilidades mais recomendadas: (1) uso de MACRO ou (2) uso de FUNÇÃO

// Uso de MACRO
#define MALLOC(ptr, size){ \
    ptr = malloc (size); \
    if (ptr == NULL) { \
        fprintf(stderr, "Memória insuficiente\n"); \
        exit(1); \
    } \
}

// Uso de FUNÇÃO
void *malloc_s(size_t size){
    // declarando um ponteiro genérico
    void *p;

    p = malloc(size);

    if (p == NULL){
        fprintf(stderr, "memória insuficiente\n");
        exit(1);
    }

    return p;
}

// char *argv[] ≃ char **argv => ponteiro de ponteiro
int main(int argc, char *argv[], char *envp[]){
  
  puts("\nUsando MACRO para fazer malloc segura");

  int *ptr;

  MALLOC(ptr, sizeof (int));

  *ptr = 7;

  printf("\nO conteúdo apontado pelo ponteiro *ptr = %d\n", *ptr);

  free(ptr);

  puts("\nUsando FUNÇÃO para fazer malloc segura");

  int *p;

  p = malloc_s(sizeof (int));

  *p = 9;

  printf("\nO conteúdo apontado pelo ponteiro *p = %d\n", *p);

  puts("\nUsando REALLOC");

  p = realloc(p, 2 * sizeof (int));

  puts("\nModificando o conteúdo dos espaços de memória realocados (com realloc) e apontados pelo ponteiro p. Utilizada a notação de ponteiros: *(p + i)");

  *(p + 0) = 12;

  *(p + 1) = 23;

  puts("\nLendo o conteúdos dos espaços de memória apontados pelo ponteiro p");

  for (int i = 0; i < 2; i++)
      printf("\nO conteúdo apontado por p[%d] = %d\n", i, *(p + i));

  puts("\nUsando MEMSET para inicializar o conteúdo dos espaços de memória apontados por um ponteiro. Cuidado ao utilizar MEMSET. Com Arrays de NÃO CHARs, utilize-a apenas para ZERAR os valores");

  memset(p, 0, 2 * sizeof (int));

  puts("\nLendo o conteúdos dos espaços de memória apontados pelo ponteiro p APÓS o uso de MEMSET (os valores devem ser = 0)");

  for (int i = 0; i < 2; i++)
      printf("\nO conteúdo apontado por p[%d] = %d\n", i, *(p + i));

  free(p);

  return 0;
}
