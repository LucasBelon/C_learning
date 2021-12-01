/* print a Fahrenheit-Celsius convertion table
 *      for f = 0,20, ... , 300*/
main(){
    int start, end, incr ;
    float fahr, celsius ;

    start = 0;  /*lower limit of the table*/
    end = 300;  /*upper limit of the table*/
    incr = 20;  /*step increment*/

    fahr = start ;
    printf("This is my second program\n") ;
    printf("  Fahr \t  Celsius\n") ;
    while (fahr <= end)
    {
        celsius = (5.0/9.0)*(fahr-32.0) ;
        printf("%4.0f°F-->%6.1f°C\n", fahr, celsius) ;
        fahr = fahr + incr ;
    }
}

/* The first two lines are a comment. They're ignored by the compiler.
 * In C every variable must be declared before being used. Usually they're
 * declared in the beggining of the function, before any executable command.
 * The precision of int's and float's depends on the machine.
 * The other types that C provides are:
 * char - character, a single byte
 * short - a short integer
 * long - a long integer
 * double - floating point with double precision
 * There are also arrangements, structures and unions of these basic types,
 * Pointers to them, functions that returns them.
 * When the program runs, the (fahr <= end) is tested (it's executed).
 * When the test becomes false, the lace is broken, and the execution will 
 * continue as the lines goes.
 * In C, a integer division truncates the result, and the fractionary part is lost
 * In C, a Integer-Float subtraction and addition automatically converts the integer
 * variable into a float. 
 *
 * the printf is a general function to format conversion. It's first argument is a 
 * string to be printed. Each % points a substitution with the format to be printed.
 * The %4.0f specification says that a floating point must be printed on a field with
 * at least 4 characters, without any decimal number. The %6.1f describes another 
 * number, with at least 6 characters, with 1 digit after the decimal point.
 * Some parts of the specifications can be ommited.
 * %6f says that it may have as many float characters as needed.
 * %.2f asks for 2 decimal characters.
 * %f indicates a floating point number only.
 * %d indicates a decimal integer
 * %o indicates a octal number
 * %x indicates a hexadecimal number
 * %c indicates a character
 * %s for a string and
 * %% for the % sign.
 * Each % sign matches in order of the second argument.
 * Printf is not a function from C language, it's only a useful function that's part of the
 * standard library that's accessible to C language.
 * C language does not define any I/O
 * This code is on page 24 of the book, exercise 1-3 */

