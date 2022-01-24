# include <stdio.h>
# include "lib1.h"
# include "lib2.h"

void main(){
    printf("We're at the beggining of the main\n") ;

    int varlib1 ;
    int varlib2 ;
    
    lib1("Estou executando lib1 como uma função dentro do main") ;
    lib2(2,3) ;
}
