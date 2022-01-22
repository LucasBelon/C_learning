/* What happens when we try to operate mathematically using characters?
 * That's what we'll find out*/

# include <stdio.h>

# define STRINGLEN 100


/* Turns 's' into a integer */
int atio(s)
char s[] ;
{
    int i, n ;
    n = 0 ;
    for (i = 0 ; s[i] >= '0' && s[i] <= '9' ; ++i){
        n = 10 * n + s[i] - '0' ;
    }
    return (n) ;
}


int main(){
    char converted ;
    char convert[STRINGLEN] = "7" ;
    /* Remember that hen we're dealing with single characters
       we must use single quotes */
    converted = atio(convert) ;
    printf("The number converted to number is: %d\n", converted) ;
    printf("The number in string is \"%c\"\n", converted) ;
}
