#include <stdio.h>

/**
 * Author: Seyi Ojenike
 * Program: WinMingle Community C Training
 * Description: Prints all unique combinations of three digits
 */

int main(void)
{
    int i;
    int j;
    int k;

    for (i = 0; i <= 7; i++)
    {
        for (j = i + 1; j <= 8; j++)
        {
            for (k = j + 1; k <= 9; k++)
            {
                putchar('0' + i);
                putchar('0' + j);
                putchar('0' + k);

                if (!(i == 7 && j == 8 && k == 9))
                {
                    putchar(',');
                    putchar(' ');
                }
            }
        }
    }

    putchar('\n');

    return (0);
}
