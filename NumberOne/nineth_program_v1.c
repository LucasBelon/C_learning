/* This program is meant to write a function that makes
 * the positive integer power of a number.*/

main(){
    int i ;
    for (i = 0; i < 31 ; ++i){
        printf("%d %d %d\n", i, pot(2, i), pot(-3, i) ) ;
    }
}

pot(x, n)
int x, n ;
{
    int i, p ;

    p = 1 ;
    for (i = 1; i <= n; ++i){
        p = p * x ;
    }
    return (p) ;
}


/* This program is on page 34 of the book
 * Every function has the format:
 *
 * name (list of arguments)
 * argument declaration
 * {
 *  Declarations
 *  Commands
 * }
 * 
 * Fuctions can show up at any order, and in one or two source-files.
 * if the source is on two or more files you'll need to tell more things
 * make it run
 * I don't have a clue about how to make it run with bigger numbers. It
 * goes to 10e10 algarisms*/

