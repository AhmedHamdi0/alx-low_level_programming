#include "main.h"

/**
 * times_table - Prints the 9 times table starting with 0.
 *
 * Description: This function prints the times table for numbers from 0 to 9.
 *
 */
void times_table(void)
{
int i, j;

for (i = 0; i < 10; i++)
{
for (j = 0; j < 10; j++)
{
int result = i * j;

if (result >= 10)
{
_putchar((result / 10) + '0');
_putchar((result % 10) + '0');
}
else
{
_putchar(' ');
_putchar(result + '0');
}

if (j != 9)
{
_putchar(',');
_putchar(' ');
}
}

_putchar('\n');
}
}

