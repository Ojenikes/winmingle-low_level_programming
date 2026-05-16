#include "main.h"

/**
 * Author: Seyi Ojenike
 * Program: WinMingle Community C Training
 * Description: Prints the alphabet 10 times using _putchar
 */

void print_alphabet_x10(void)
{
    int i;
    char letter;

    for (i = 0; i < 10; i++)
    {
        for (letter = 'a'; letter <= 'z'; letter++)
        {
            _putchar(letter);
        }

        _putchar('\n');
    }
}
