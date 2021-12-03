/* This code is meant to do a word count*/

#define EOF -1

#define YES 1
#define NO  0

main(){
    int c, nl, nw, nc, inword;

    inword = NO ;
    nl = nw = nc = 0 ;
    printf("nl = number of lines\nnw = number of words\nnc = number of characters\n\n");
    while ((c = getchar()) != EOF){
        ++nc;
        if (c == '\n'){
            ++ nl ;
        }
        if (c == ' ' || c == '\n' || c == '\t'){
            inword = NO;
        }
        else if (inword == NO){
            inword = YES;
            ++ nw ;
        }
    }
    printf("nl=%d nw=%d nc=%d\n", nl, nw, nc) ;
}


/* This program is on page 30 of the book*/

/* Below there's an alternative version which will show you on the 
 * runtime instead of waiting for the program to end*/

/* <---- TO MAKE IT RUN ERASE THIS AND THE OTHER BELOW
#define EOF -1

#define YES 1
#define NO  0

main(){
    int c, nl, nw, nc, inword, ntab;

    inword = NO ;
    nl = nw = nc = ntab = 0 ;
    printf("nl = number of lines\nnw = number of words\nnc = number of characters\n\n");
    while ((c = getchar()) != EOF){
        ++nc;
        if (c == '\n'){
            ++ nl ;
        }
        if (c == ' ' || c == '\n' || c == '\t'){
            inword = NO;
            ++ ntab ;
        }
        else if (inword == NO){
            inword = YES;
            ++ nw ;
        }
        printf("nl=%d nw=%d nc=%d nt = %d\n", nl, nw, nc, ntab) ;
    }
}
THIS ONE IS THE OTHER------>*/ 
