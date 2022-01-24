# include <stdio.h>

int lib1(s)
char *s ;
{
    printf("Estamos 'executando' a lib1.c\n") ;
    printf("%s\n", s) ;
    return (*s) ;
}

