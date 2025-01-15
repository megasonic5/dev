#include <stdio.h>
#include <stdarg.h>

typedef int numero;
typedef char texto;
typedef enum enumeracion;
void imprimir(const char *cadena,...) {
    va_list a;
    va_start(a, cadena);
    vprintf(cadena, a);
    va_end(a);
}

void leer_cadena(const char *cadena,...) {
    va_list a;
    va_start(a, cadena);
    vscanf(cadena, a);
    va_end(a);
}

#define NULO ((void*)0)