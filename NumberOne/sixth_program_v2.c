/* This program is meant to count lines, spaces and tabs.
 * The annotations to make this work are at the
 * first_program_v2.c*/

#define EOF 0

main(){
    
    int c, nl, nt, ns ;
    
    nl = 0 ;
    nt = 0 ;
    ns = 0 ;
    while ((c=getchar()) != EOF){
        if (c=='\n'){
            ++nl ;
        }
        else{
            if(c=='\t'){
                ++ nt ;
            }
            else{
                if(c==' '){
                    ++ ns ;
                }
            }
        }
        printf("\n nl is %d \n nt is% d \n ns is %d \n ", nl, nt, ns) ;
    }
}
/* This code is on page 30, exercise 1-6 of the book*/
