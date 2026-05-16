#include <stdio.h>

/**
 * Author: Seyi Ojenike
 * Program: WinMingle Community C Training
 * Description: Prints single-digit numbers separated by comma and space
 */

int main(void)
{
    int number;

    for (number = 0; number <= 9; number++)
    {
        putchar('0' + number);

        if (number != 9)
        {
            putchar(',');
            putchar(' ');
        }
    }

    putchar('\n');

    return (0);
}
