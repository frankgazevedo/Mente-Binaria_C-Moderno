#include <stdio.h>

// char *argv[] ≃ char **argv => ponteiro de ponteiro
int main(int argc, char *argv[], char *envp[]){
  
  printf("\nQuantidade de argumentos passados para a execução da main (argc): %d\n", argc);

  printf("\nImprimindo o primeiro argumento passado para a execução da main (argv[0]): %s\n", argv[0]);

  puts("\nImprimindo todos os argumentos passados para a execução da main (argv[i])\n");

  for(int i = 0; i < argc; i++)
      puts(argv[i]);

  //putchar('\n');

  puts("\nImprimindo algumas variáveis de ambiente passadas como argumento para a execução da main (envp[i])\n");
   for(int i = 0; i < 3; i++) // Consegui imprimir até 49 variáveis de ambiente, embora não saiba se esse é o valor total
      puts(envp[i]);

  puts("\nÉ importante observar que no contexto de passagem de argumentos de função: char *argv[] ≃ char **argv => Ponteiro de Ponteiro\n");

  puts("\nMas as declarações de Ponteiros precisam estar muito bem claras para quem vai utilizá-los: \n"); 

  puts("\nchar *argv[] é um array de ponteiros para char\n");

  puts("\nchar (*argv)[] é um ponteiro para um array de chars\n");

  puts("\nchar **argv é um ponteiro para um ponteiro para char (ponteiro de ponteiro)\n");

  puts("\nExemplo de Ponteiro de Ponteiro: char **s = {\"String1\", \"String2\", ..., \"StringN\"}\n");

  puts("\nAinda sobre Ponteiros e Arrays: um elemento de um Array, como argv[] por exemplo, pode ser acessado tanto por 'argv[i]' quanto por '*(argv + i)'. De fato, o OPERADOR [] é apenas um ATALHO para a notação de ponteiros e, nessa notação, inexiste distinção entre '*(argv+i)' e '*(i+argv)', tal qual entre 'argv[i]' e 'i[argv]'.\n");

  return 0;
}
