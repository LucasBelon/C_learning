/* print a Celsius-Fahrenheit convertion table
 *      for f = 0,20, ... , 300*/
main(){
    int start, end, incr ;
    float fahr, celsius ;

    start = 0;  /*lower limit of the table*/
    end = 300;  /*upper limit of the table*/
    incr = 20;  /*step increment*/

    celsius = start ;
    printf(" This is a Celsius-Fahrenheit convertion table\n") ;
    printf(" Celsius\tFahr\n") ;
    while (celsius <= end)
    {
        fahr = ( (9.0/5.0)*(celsius) )+32.0 ;
        printf("%4.0f°C----->%6.1f°F\n", celsius, fahr) ;
        celsius = celsius + incr ;
    }
}
/* The amount of character avaiable to the % to fill up afects
 * 'white spaces'. It fills up from right to left.
 * This code is on page 24, execise 1-4*/
