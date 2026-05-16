#include <stdio.h>

/**
 * Author: Seyi Ojenike
 * Program: WinMingle Community C Training
 * Description: Prints hexadecimal digits 0-9 and a-f
 */

int main(void)
{
    int number;
    char letter;

    for (number = 0; number <= 9; number++)
    {
        putchar('0' + number);
    }

    for (letter = 'a'; letter <= 'f'; letter++)
    {
        putchar(letter);
    }

    putchar('\n');

    return (0);
}
