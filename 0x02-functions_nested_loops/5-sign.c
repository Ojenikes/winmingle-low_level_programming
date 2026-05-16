#include "main.h"

/**
 * Author: Seyi Ojenike
 * Program: WinMingle Community C Training
 * Description: Prints the sign of a number
 */

int print_sign(int n)
{
    if (n > 0)
    {
        _putchar('+');
        return (1);
    }

    if (n == 0)
    {
        _putchar('0');
        return (0);
    }

    _putchar('-');
    return (-1);
}
