# include <stdio.h>

# define ALIMFORM '\014' /* "Form Feed in ASCII" */
# define MAXLINHA 1000
# define SUCCESS 1
# define PERSONALSTRING "A string of characters"
int main(){


    char linha [MAXLINHA + 1] ;

    int hours = 3 ;

    double seconds = 60 * 60 * hours ;

    char string[30] = PERSONALSTRING ;


    printf("Hours - int\n\n") ;

    printf("%%f float: %6.0f ,%%o octal: %o\n", hours, hours) ;
    printf("%%d decimal(int): %d, %%x hexadecimal: %x\n", hours, hours) ;
    printf("%%c character: %cc", hours) ;
/*    printf("%%s string: %s", hours) ;     */

    printf("\n\nSeconds - double\n\n") ;

    printf("%%f float: %6.0f ,%%o octal: %o\n", seconds, seconds) ;
    printf("%%d decimal(int): %d, %%x hexadecimal: %x\n", seconds, seconds) ;
    printf("%%c character: %cc", seconds) ;
/*    printf("%%s string: %s", seconds) ;*/

    printf("\n\nString - array[30]\n\n") ;

    printf("%%f float: %6.0f ,%%o octal: %o\n", string, string) ;
    printf("%%d decimal(int): %d, %%x hexadecimal: %x\n", string, string) ;
    printf("%%c character: %cc", string) ;
    printf("%%s string: %s", string) ;

    printf("\n\nALIMFORM -'\\014' \n\n") ;

    printf("%%f float: %6.0f ,%%o octal: %o\n", ALIMFORM, ALIMFORM) ;
    printf("%%d decimal(int): %d, %%x hexadecimal: %x\n", ALIMFORM, ALIMFORM) ;
    printf("%%c character: %cc\n", ALIMFORM) ;
/*    printf("%%s string: %s", ALIMFORM) ;*/

    return SUCCESS ;

}


/*  As it's easy to see, when some types of data is converted on the 
 *  printf syntax the function simply stops, what forced me to comment
 *  the lines where it happened.
 *
 *  Also, our functions needs to be declared as to the type of 
 *  response they will give the to system. I tried with void main(){}
 *  and this last form is int main, so the function can return a int value*/
