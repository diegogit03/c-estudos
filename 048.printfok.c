#include <stdio.h>

void main(void)
{
    int result;

    result = printf("B�blia do programador c/c++, do Jamsa!\n");
    if(result == EOF)
        fprintf(stderr, "Erro dentro de printf\n");
}
