#include <stdio.h>

/**
 * Author: Seyi Ojenike
 * Program: WinMingle Community C Training
 * Description: Prints lowercase and uppercase alphabets
 */

int main(void)
{
    char letter;

    for (letter = 'a'; letter <= 'z'; letter++)
    {
        putchar(letter);
    }

    for (letter = 'A'; letter <= 'Z'; letter++)
    {
        putchar(letter);
    }

    putchar('\n');

    return (0);
}
