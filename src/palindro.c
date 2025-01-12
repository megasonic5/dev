#include <stdio.h>
#include <string.h>

int Palindro(char *cadena) {
    register int i,j;
    i=0;
    j=strlen(cadena)-1;
    while(i<j && cadena[i]==cadena[j]) {
        i++;
        j--;
    }
    return (i>=j);
}

int main(void) {
    char cadena[100];
    printf("\nIntroduce la palabra");
    gets(cadena);
    printf("La palabra %s %s palindroma", cadena, (Palindro(cadena)) ? "es" : "no es");
    return 0;
}