/* This program is to do a word count over a
 * character chain (string).*/

#define EOF 0

main(){
    long nc ;

    nc = 0;
    while(getchar() != EOF){
        ++nc ;
    }
    printf("%ld\n",nc) ;
}

/* The ++ operator is a incrementation of 1 to the counter.
 * It's displayed before the variable because of the stack
 * from the calculator. It need a operation and then a number,
 * so we got the operation ++ and then the variable that suffers
 * the action.
 * I'll try to find out when the {} are needed. When asked it to
 * a experienced programmer, he said that when the while statement
 * has only one action there's no need to use them.
 * This program is on page 28 of the book.
 * When we try to put another operation inside the while indentation
 * it only reads the first command.
 *
  
  while()
    command1;
    command2;

  Is equal to
  
  while()
    command1;
  command2;
 *
 * this code is on page 28 of the book */
