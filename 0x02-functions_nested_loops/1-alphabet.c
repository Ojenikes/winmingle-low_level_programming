#include "main.h"

/**
 * Author: Seyi Ojenike
 * Program: WinMingle Community C Training
 * Description: Prints lowercase alphabet using _putchar
 */

void print_alphabet(void)
{
    char letter;

    for (letter = 'a'; letter <= 'z'; letter++)
    {
        _putchar(letter);
    }

    _putchar('\n');
}
