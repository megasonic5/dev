#include <stdio.h>

int main(int argc, char *argv[], char *env[]) {
    register int i;
    printf("\nEl valor de argc es: %i\n", argc);
    for(i=0;i<argc;i++)
        printf("El argumento %i es: %s\n", i, argv[i]);
    for(i=0;env[i]!=NULL;i++)
        printf("La variable de ambiente %i es: %s\n", i, env[i]);
    return 0;
}