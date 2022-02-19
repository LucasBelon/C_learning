/* */

# include <stdio.h>
# define INDEX 4
# define ARRAYSIZE 10
int main(){
    int a[ARRAYSIZE] ;
    int *pa ;
    int i ;
    int x ;
    /* Adding some numbers to "a" so we can see something happening*/
    for (i=0; i<ARRAYSIZE; ++i){
        a[i] = i ;
    }

    pa = &a[INDEX] ;
    x = *pa ;
    printf("x=*pa; printing x: %d \n", x) ;
    printf("pa = &a[%d], printing pa: %x\n (in hex)", INDEX, (*pa) );
    printf("pa = &a[%d], printing *pa: %d \n", INDEX, (*pa) );
    printf("Printing *(pa+1): %d \n", (*(pa+1)) );
}
