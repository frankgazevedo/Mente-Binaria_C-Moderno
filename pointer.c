#include <stdio.h>

// Função criada para demonstrar o uso da Aritmética de Ponteiros
void imprime(char *s){
    while(*s) // Essa linha equivale à "*s != '\0'"
        putchar(*s++); //Aritmética de Ponteiros
}


int main(void){
  
  int a[] = {2012, 2021, 2023};

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
    printf("O conteúdo de a[%d] é: %d\n", i,  *(a + i)); // Aritmética de Ponteiros

  printf("\nDeclarando uma variável: int i; \n");
  int i = 2017;

  printf("\nDeclarando um Ponteiro: int *p;\n");
  int *p;

  printf("\nInicializando um Ponteiro: p = &i;\n");
  p = &i;

  putchar('\n');

  printf("Endereço de i em memória SEM ponteiro [&i]: %p\n", &i);

  printf("Endereço de i em memória COM ponteiro [%%p]: %p\n", p);

  printf("Conteúdo de i SEM ponteiro [i]: %d\n", i);

  printf("Conteúdo de i COM ponteiro [*i]: %d\n", *p);

  printf("\nAs diferentes formas de \"alocar\" Strings e suas correlações com Ponteiros:\n");

  printf("\n(1) char s[] = \"Frank\"; // Essa declaração aloca dinamicamente a String na STACK. Ela equivale a char s[] = {'F', 'r', 'a', 'n', 'k', '\\0'}; Portanto, tem-se um \"ponteiro constante\" que não pode ser redesignado para outra string, embora seja plenamente possível alterar o conteúdo de s[i]\n");
  
  printf("\n(2) char *t = \"Frank\"; // Essa declaração aloca uma String com \"duração de armazenamento estático\" na \"read-only memory\" (HEAP, o segmento .text), ao mesmo tempo que inicializa uma variável pointer-to-char na STACK com o endereço do primeiro caractere daquela String\n");

  printf("\nA situação 2 equivale a declararmos:\nstatic const char __unnamed[] = \"abc\";\nchar *c = (char *) __unnamed;\n");

  printf("\n(3) char u[]= { 0x46, 0x72, 0x61, 0x6e, 0x6b, 0x00} (\"Frank\" em Hex); // Essa declaração aloca dinamicamente a String na STACK. Ela equivale a char u[] = \"Frank\"; Portanto, tem-se um \"ponteiro constante\" que não pode ser redesignado para outra string, embora seja plenamente possível alterar o conteúdo de u[i]\n");

  char s[] = "Frank";

  char *t = "Frank";

  char u[] = { 0x46, 0x72, 0x61, 0x6e, 0x6b, 0x00 };

  printf("\nImprimindo as Strings com puts()\n");

  puts(s);

  puts(t);

  puts(u);

  printf("\nImprimindo as Strings com uma função criada para tal, cuja assinatura é \"void imprime(char *s)\"\n");

  imprime(s);

  imprime(t);

  imprime(u);

  putchar('\n');
  
  return 0;
}
