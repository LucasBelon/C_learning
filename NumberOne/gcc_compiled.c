#include <stdio.h>

/* Testing the GCC compiler. First step: Print "Hello World" */

int main()
{
    printf("Hello World!!!\n");
    return 0;
}

/*Many questions: 
 * What is that include?
 * It's the declaration that a standard library will be added. 
 * What is that int main() and why it's there?
 * It's there so the compiler can understand better what it should do
 * Why would I need to return 0?
 * To tell to the system that the function came to an end
 * why is stdio with a .h extension?
 * It stands for a header file, that says "oh, I'll call the function you need"
 * to compile this program it was used:
 * $ gcc testWithGcc.c -o testWithGcc */
