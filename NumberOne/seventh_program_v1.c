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

/* On line 12 we see a different way to put values on our variables.
 * If they're all the same we can do this short way.
 * On line 19 we see the '||' operator, it means 'or', and it's part
 * of boolean values operation. Probably there's a bool table if you 
 * need further information.
 * For the 'and' operator we use &&.
 * On this program we learned the else statement. It will only run if the 'if'
 * statement do not run. It's not that easy to visualize, but we're actually
 * nesting that if inside the else.
 * When we have only one action to our decision structure we can ommit the {}
 * So, we could do as it follows for the line 22:
 *
 * else {
 *     if (){
 *     };
 * };
 *
 * */