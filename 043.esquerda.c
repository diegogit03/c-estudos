#include <stdio.h>

void main()
    {
        int int_valor = 5;
        float flt_valor = 3.33;

        printf("Justificado á direita %5d valor\n", int_valor);
        printf("Justificado á esquerda %-5d valor\n", int_valor);
        printf("Justificado á direita %7.2f valor\n", flt_valor);
        printf("Justificado á esquerda %-7.2f valor\n", flt_valor);
    }