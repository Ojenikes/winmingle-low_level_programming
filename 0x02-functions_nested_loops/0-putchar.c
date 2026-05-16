#include "main.h"

/**
 * Author: Seyi Ojenike
 * Program: WinMingle Community C Training
 * Description: Prints "_putchar" followed by a new line
 */

int main(void)
{
    char text[] = "_putchar";
    int i = 0;

    while (text[i] != '\0')
    {
        _putchar(text[i]);
        i++;
    }

    _putchar('\n');

    return (0);
}
