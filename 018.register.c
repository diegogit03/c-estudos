void main()
    {
        /*

            Registros

            Os registros s�o mais r�pidos do que a mem�ria para acessar, de modo que as vari�veis que s�o
            mais usadas em um programa C podem ser colocadas em registros usando a palavra-chave de register.

            Quando utilizar

            Voc� dever� usar o modificador de tipo register com as variaveis que seu programa acessar repetidamente,
            tais como vari�veis controladoras de um "la�o de repeti��o" que o programa acessa a cada intera��o.

        */

        register int contador;
        register unsigned sinaliza_status;
    }
