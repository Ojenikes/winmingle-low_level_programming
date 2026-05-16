#include <stdio.h>

/**
 * Author: Seyi Ojenike
 * Program: WinMingle Community C Training
 * Description: Prints single-digit numbers from 0 to 9
 */

int main(void)
{
    int number;

    for (number = 0; number <= 9; number++)
    {
        putchar(number + '0');
    }

    putchar('\n');

    return (0);
}
