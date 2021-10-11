#include <stdio.h>

int main(void){
    char c;

    printf("O tamanha de c(char) é: %zu Byte\n", sizeof c);
    printf("O tamanho do tipo char é: %zu Byte \n", sizeof(char));

    c = 10;

    printf("Imprimindo um CHAR como decimal\n");
    printf("C = %d\n", c);

    printf("O INTERVALO que podemos imprimir com um SIGNED CHAR é -128 a 127\n");
    printf("Ao tentar imprimir um número fora desse range, temos um OVERFLOW\n");

    // Haverá overflow na conversão do int (256) para (signed) char. Nesse caso, será exibido o valor ZERO
    c = 256;

    printf("C = %d\n", c);

    // Não haverá. Entretanto, na conversão do int (255) para (signed) char, o COMPLEMENTO DE 2 será utilizado.
    c = 255;

    printf("C = %d\n", c);

    printf("O INTERVALO que podemos imprimir com um UNSIGNED CHAR é 0 a 255\n");
    printf("Ao tentar imprimir um número fora desse range, temos um OVERFLOW\n");

    unsigned char d;
    printf("Ao tentar imprimir um número fora desse range, temos um OVERFLOW\n");

    // Haverá overflow na conversão do int (256) para (unsigned) char. Nesse caso, será exibido o valor ZERO
    d = 256;

    printf("D = %d\n", d);

    // Não haverá. Entretanto, na conversão do int (255) para un(signed) char.
    d = 255;

    printf("D = %d\n", d);
    
    // Só um aviso: Um caracter literal, como 'A', por exemplo, tem o tamanho de um INT, não de um CHAR. Isso é fácil demonstrar usando o operador sizeof('A'), por exemplo,
    // já que obteremos 4 (sizeof INT) e não 1 (sizeof CHAR)
    // Ao fazermos a declaração abaixo, o inteiro 'A' é convertido para char, mantendo apenas os 8 bits inferiores.
    char S = 'A';

    // Isso é diferente da "string" literal, onde cada item tem 1 byte de tamanho, exceto se usamos prefixos como L, u, U ou u8 (no caso do C11).
    printf("A string literal S possui: %zu Bytes \n", sizeof S);

    // Ao imprimirmos a "string" literal A, vemos que sizeof contabilizará o caracter '\0'.
    printf("A string literal \"A\" possui: %zu Bytes \n", sizeof("A"));
 
    // Ao imprimirmos o "caracter" literal A, estamos vendo um PONTEIRO.
    printf("A string literal \'A\' possui: %zu Bytes \n", sizeof('A'));
 
    return 0;
}
