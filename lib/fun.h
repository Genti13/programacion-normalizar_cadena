#ifndef FUN_H_INCLUDED
#define FUN_H_INCLUDED

#include <stdio.h>
#include <ctype.h>

#define esBlanco(x) ((x) == ' ' || (x) == '\t')

void operarCadena(char *, const void (*)(char *));

void mostrar( char *);
void normalizar(char *);



#endif // FUN_H_INCLUDED
