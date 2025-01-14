#include <stdio.h>
#include <stdarg.h>

typedef int numero;
typedef char texto;
typedef enum enumeracion;
int imprimir(const char *cadena,...) {
    va_list a;
    va_start(a, cadena);
    vprintf(cadena, a);
    va_end(a);
}
#include <stdio.h>
#include <stdarg.h>

void leer_datos(const char *formato, ...) {
    va_list args;
        va_start(args, formato);
            vscanf(formato, args);
                va_end(args);
                }
#define NULO ((void*)0)