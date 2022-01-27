/* Here we'll see that we're also giving
 * To the function the location of our variable.
 * Which means that we're giving to the function
 * a higher privilege than only read
 * I can't Understand Anything */

# include <stdio.h>
# define ARRAYSIZE 10

void test(array)
int array[] ;
{
    array[0] = 99 ;
    array[2] = 99 ;
}

int main(){
    
    int a[ARRAYSIZE] ;
    int i ;
    
    for (i=0 ; i < ARRAYSIZE ; ++i){
        a[i] = i ;
    }
    for (i=0 ; i < ARRAYSIZE ; ++i){
        printf("Test1, index %d, valor %d\n",i, a[i]) ;
    }
    test(a) ;
    for (i=0 ; i < ARRAYSIZE ; ++i){
        printf("Test2, index %d, valor %d\n",i, a[i]) ;
    } 
}
