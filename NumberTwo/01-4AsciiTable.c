/* This program is here to see how the printing using 
 * the ascii works, and what are it's limits*/

# include <stdio.h>

# define SHIFTNUMBER 2
# define ITEMCOUNTER 5
# define ASCII_A 49
# define ASCII_END 128

void main(){
    int contador ;
    for ( contador = ASCII_A ; contador < ASCII_END ; ++contador ) {
        printf("Char:' %c 'Num: %d \t", contador, contador) ;
        if ( ( (contador + SHIFTNUMBER) % ITEMCOUNTER ) == 0 ){
            printf("\n") ;
        }
        if (contador+2 == ASCII_END){
            ++contador ;
            printf("\nChar: BSpace Num: %d \t", contador) ;
        }
    }
    printf("\n") ;
}
