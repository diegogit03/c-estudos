void main(void)
    {
        /*

            O modificador unsigned tira o bit de sinal da variavel, assim sendo possivel somente utilizar
            valores positivos.

            no tipo int:

            se o unsigned for utilizado em uma variavel do tipo int, o bit de sinal ser� removido, e ser� impossivel
            ter um numero negativo, e aumentar� a limita��o do numero inteiro, de 0 at� 65.535.

            no tipo char:

            se o unsigned for utilizado em uma variavel do tipo char, o codigo ASCII n�o poder� ser negativo(pois o bit de sinal ser� removido)
            e ter� uma limita��o de 0 at� 255.

        */

        unsigned int valor_maximo_com_unsigned = 65.535;
        unsigned char valor_maximo_do_char_ascii = 255;
    }
