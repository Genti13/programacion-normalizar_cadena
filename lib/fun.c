#include "fun.h"

void operarCadena(char * cadena, const void (*operacion)(char *))
{
    operacion(cadena);
}

void mostrar(char * cadena)
{
    printf("-->");
    while(*cadena)
    {
        printf("%c",*cadena);
        cadena++;
    }

    printf("<--");
}

void normalizar(char * cadena)
{
    const char * o = cadena;
    char * d = cadena;

    while(*o)
    {
        while(esBlanco(*o))//Avanzo hasta que encuentro algo que no sea espacio en blanco
        {
            o++;
        }

        if(*o)//Se encontro algo que no es espacio; Lo paso a mayuscula y avanzo.
        {
            *d = toupper(*o);
            o++;
            d++;
        }

        while(!esBlanco(*o) && *o)//El resto de la palabra la paso a minuscula
        {
            *d = tolower(*o);
            d++;
            o++;
        }

        if(esBlanco(*o))//Se encontro un espacio, termina la palabra y avanzo una posicion
        {
            o++;
            d++;
        }
    }

    if(esBlanco(*(d-1)))
    {
        d--;
    }

    *d='\0';
}
