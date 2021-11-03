#include <stdio.h>
#include <string.h> // Necessária para MEMSET

// Declarando uma UNION. Atenção para o ; ao final.
union st {
    unsigned char id;
    unsigned int num;
};

// char *argv[] ≃ char **argv => ponteiro de ponteiro
int main(int argc, char *argv[], char *envp[]){
  
  puts("\nSobre UNIONs\n");

  union st s;

  puts("\nDeclarando e lendo uma UNION\n");

  s.id = 7;
  s.num = 2012;

  printf("s.id = %d\n", s.id);
  printf("s.num = %d\n", s.num);

  printf("\nsizeof (union st): %zu\n", sizeof (union st));
  
  puts("\nUsando MEMSET para inicializar o conteúdo da UNION. Cuidado ao utilizar MEMSET. Com Arrays de NÃO CHARs, utilize-a apenas para ZERAR os valores");

  memset(&s, 0, sizeof (union st));
  
  puts("\nLendo a UNION APÓS o uso de MEMSET (os valores devem estar ZERADOS)\n");

  printf("s.id = %d\n", s.id);

  printf("s.num = %d\n", s.num);

  puts("\nDeclarando e lendo um ARRAY de UNIONs\n");

  union st a[2];

  a[0].id = 12;
  a[0].num = 2021;

  printf("a[0].id = %d\n", a[0].id);
  printf("a[0].num = %d\n", a[0].num);

  return 0;
}
