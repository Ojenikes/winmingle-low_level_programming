#include <stdio.h>

/**
 * Author: Seyi Ojenike
 * Program: WinMingle Community C Training
 * Description: Prints the alphabet in lowercase
 */

int main(void)
{
    char letter;

    for (letter = 'a'; letter <= 'z'; letter++)
    {
        putchar(letter);
    }

    putchar('\n');

    return (0);
}
