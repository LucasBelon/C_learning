/* print a Celsius-Fahrenheit convertion table
 * with a for loop.*/
main(){
    int fahr ;
    printf("This is my fourth program\n");
    printf("  Fahr \t Celsius\n");
    for (fahr = 0; fahr <= 300; fahr = fahr + 20)
        printf("%4d°F %6.1f°C\n", fahr, (5.0/9.0)*(fahr-32)) ; 
}
/* On the first argument we see the lower limit. On the second the upper limit.
 * On the third the loop step.
 * Its 3 main parts are: Start, if true continue, reboot with step*/

