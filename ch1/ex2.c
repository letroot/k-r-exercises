include "stdio.h"

/* Experiment to find out what happens when prints's argument
    string contains \c, where c is some character not listed above.
*/

int main()
{
    printf("hello, world\a"); // audible signal
    printf("hello, world\b"); // backspace
    printf("hello, world\n"); // new line
    printf("HELLO, \tWORLD"); // tab
    printf("hello\v, world"); // vertical tab
    printf("hello\f, world"); // new page/clear screen
    printf("hello world\r"); // carriage return - clears everything before it

    return 0;
}