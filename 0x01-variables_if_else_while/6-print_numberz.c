#include <stdio.h>

/**
 * Author: Seyi Ojenike
 * Program: WinMingle Community C Training
 * Description: Prints numbers 0 to 9 using only putchar twice
 */

int main(void)
{
    int number;

    for (number = 0; number <= 9; number++)
    {
        putchar('0' + number);
    }

    putchar('\n');

    return (0);
}
