/* This program is to take a glance at I/O of characters.
 * It reads a character and returns the character itself.
 * It actually copy the input to the output*/

/*
 *#define EOF   0
 * or
 *#define EOF   -1
 */

#define EOF 0

main(){
    int c;

    c = getchar();
    while (c != EOF){
        putchar(c) ;
        c = getchar() ;
    }
}

/* The != is 'not equal to' operator.
 * EOF stands to End Of File. It should return a true or false
 * getchar() reads a EOF statement when it's done. It seems that
 * the absence of characters are also a relevant information.
 * c is declared as int. It's able to handle the EOF and others 
 * characters as well.
 * When we're compiling it, it says that the EOF is a element
 * of the <stdio.h>, and asks if we forgot to put it into the code.
 * This code is on page 27 of the book*/
