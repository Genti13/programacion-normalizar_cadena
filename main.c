#include <stdio.h>
#include "lib/fun.h"

int main()
{
    char cadena[] = "         baNANa       baIlariNA   coMe mAndaRINa  ";
    //char cadena[] = "         baNANa       baIlariNA";

    operarCadena(cadena, normalizar);
    operarCadena(cadena, mostrar);
    return 0;
}
