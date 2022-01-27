#include <stdio.h>

/* Testing the GCC compiler. First step: Print "Hello World" */

int main()
{
    printf("Hello World!!!\n");
    return 0;
}

/*Many questions: 
 * What is that include?
 * Answer: It's the declaration that a standard library will be added. 
 * What is that int main() and why it's there?
 * Answer: It's there so the compiler can understand better what it should do
 * Why would I need to return 0?
 * Answer: To tell to the system that the function came to an end
 * why is stdio with a .h extension?
 * Answer: It stands for a header file, that says "oh, I'll call the function you need"
 * to compile this program it was used:
 * $ gcc 00-1testWithGcc.c -o testWithGcc 
 * 
 * In Termux:
 * We don't have the gcc compiler program, we need to use the Clang, that uses the
 * llvm. There are a front-end and back-end parts of a compiler. We need both
 * to operate with them, so we say that gcc is a compiler, but clang isn't.*/
