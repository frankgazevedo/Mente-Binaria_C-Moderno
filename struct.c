#include <stdio.h>
#include <string.h> // Necessária para MEMSET

// Declarando uma STRUCT. Atenção para o ; ao final.
struct st {
    unsigned char id;
    unsigned int num;
};

// char *argv[] ≃ char **argv => ponteiro de ponteiro
int main(int argc, char *argv[], char *envp[]){
  
  puts("\nSobre STRUCTs\n");

  struct st s;

  puts("\nDeclarando e lendo uma STRUCT\n");

  s.id = 7;
  s.num = 2012;

  printf("s.id = %d\n", s.id);
  printf("s.num = %d\n", s.num);

  printf("\nsizeof (struct st): %zu\n", sizeof (struct st));
  
  puts("\nUsando MEMSET para inicializar o conteúdo da STRUCT. Cuidado ao utilizar MEMSET. Com Arrays de NÃO CHARs, utilize-a apenas para ZERAR os valores");

  memset(&s, 0, sizeof (struct st));
  
  puts("\nLendo a STRUCT APÓS o uso de MEMSET (os valores devem estar ZERADOS)\n");

  printf("s.id = %d\n", s.id);

  printf("s.num = %d\n", s.num);

  puts("\nDeclarando e lendo um ARRAY de  STRUCTs\n");

  struct st a[2];

  a[0].id = 12;
  a[0].num = 2021;

  printf("a[0].id = %d\n", a[0].id);
  printf("a[0].num = %d\n", a[0].num);

  return 0;
}
