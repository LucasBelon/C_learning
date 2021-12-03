/* This program is meant to count each occurrency of each character
 * that comes from the input. There are 12 input categories, so it's
 * convenient to use an array to count a number of occurencies of each digit
 * instead of 10 individual variables.*/

#define EOF -1

main(){
    int c, i, nwhite, nother ;
    int ndigit[10] ;

    nwhite = nother = 0 ;

    for (i = 0; i < 10; ++ i){
        ndigit[i] = 0;
    }
    while ((c = getchar()) != EOF){
        if (c >= '0' && c<= '9'){
            ++ ndigit[c - '0'] ;
        }
        else{
            if (c == ' ' || c == '\n' || c == '\t'){
                ++ nwhite;
            }
            else{
                ++ nother;
            }
        }
    }
    printf("digits=");
    for (i = 0; i < 10; ++ i){
        printf(" %d", ndigit[i]);
    }
    printf("\nwhitespace = %d, other = %d\n", nwhite, nother);
}

/* The 10th line shows us a declaration of an array. We access them by their indexes.
 * Any integer expression can be used as a index number. The indexes always starts on zero.
 * The declared array is there to store numeric values. The operation inside index is there
 * to */
