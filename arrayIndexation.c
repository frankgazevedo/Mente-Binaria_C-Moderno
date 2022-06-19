#include <stdio.h>

#define TAM 2

enum pedras { CAVALO, BISPO, TORRE, RAINHA };

// char *argv[] ≃ char **argv => ponteiro de ponteiro
int main(int argc, char *argv[], char *envp[]){
  
  puts("\nAinda sobre Ponteiros e Arrays: um elemento de um Array, como argv[] por exemplo, pode ser acessado tanto por 'argv[i]' quanto por '*(argv + i)'. De fato, o OPERADOR [] é apenas um ATALHO para a notação de ponteiros e, nessa notação, inexiste distinção entre '*(argv+i)' e '*(i+argv)', tal qual entre 'argv[i]' e 'i[argv]'.");
 
  puts("\nDeclarando um Array UNIDIMENSIONAL: s[6] = \"Frank\"");

  char s[6] = "Frank";

  printf("\nLendo o 3º elemento do Array com o OPERADOR [] (s[2]): %c\n", s[2]);

  printf("\nLendo o 3º elemento do Array com a notação de ponteiros (*(s+2)): %c\n", *(s+2)); // Aritmética de ponteiros

  puts("\nDeclarando um Array MULTIDIMENSIONAL: t[TAM][TAM]");

  int t[TAM][TAM] = { };

  puts("\nLendo o Array MULTIDIMENSIONAL com o operador []: t[TAM][TAM]\n");

  for (int i = 0; i < TAM; i++)
      for (int j = 0; j < TAM; j++){
          printf("[%d][%d] = %d\t", i, j, t[i][j]);
          if (j == TAM-1)
              putchar('\n');
      }

  puts("\nPreenchendo o Array MULTIDIMENSIONAL t[TAM][TAM] com os elementos da enum 'pedras':");

  t[0][0] = CAVALO;
  t[0][1] = BISPO;
  t[1][0] = TORRE;
  t[1][1] = RAINHA;

  puts("\nLendo o Array MULTIDIMENSIONAL com a notação de ponteiros: *(*(t + i) + j))\n");

  for (int i = 0; i < TAM; i++)
      for (int j = 0; j < TAM; j++){
          printf("[%d][%d] = %d\t", i, j, *(*(t + i) + j));
          if (j == TAM-1) // Quando chegarmos a última coluna j da linha i, saltaremos para a próxima linha
              putchar('\n');
      }

  return 0;
}
