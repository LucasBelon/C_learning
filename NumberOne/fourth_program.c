/* print a Celsius-Fahrenheit convertion table
 * with a for loop, inverted.*/
main(){
    int fahr ;
    printf("This is my fourth program\n");
    printf(" Fahr \t   Celsius\n");
    for (fahr = 300; fahr >= 0; fahr = fahr - 20)
        printf("%4d°F -->%6.1f°C\n", fahr, (5.0/9.0)*(fahr-32)) ; 
}

