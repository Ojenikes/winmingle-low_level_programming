#include <stdio.h>

/**
 * Author: Seyi Ojenike
 * Program: WinMingle Community C Training
 * Description: Prints lowercase alphabet except q and e
 */

int main(void)
{
    char letter;

    for (letter = 'a'; letter <= 'z'; letter++)
    {
        if (letter != 'q' && letter != 'e')
        {
            putchar(letter);
        }
    }

    putchar('\n');

    return (0);
}
