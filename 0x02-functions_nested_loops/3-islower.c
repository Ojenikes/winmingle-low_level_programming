#include "main.h"

/**
 * Author: Seyi Ojenike
 * Program: WinMingle Community C Training
 * Description: Checks for lowercase character
 */

int _islower(int c)
{
    if (c >= 'a' && c <= 'z')
    {
        return (1);
    }

    return (0);
}
