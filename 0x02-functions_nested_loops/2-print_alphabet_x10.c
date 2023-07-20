#include "main.h"

/**
 * print_alphabet_x10 - Prints the lowercase alphabet 10 times using _putchar
 *
 * Description: prints the lowercase alphabet from 'a' to 'z' 10 times.
 *
 * Return : void
 */
void print_alphabet_x10(void)
{
int i;
for (i = 0; i < 10; i++)
{
char ch_low = 'a';

while (ch_low <= 'z')
{
_putchar(ch_low);
ch_low++;
}

_putchar('\n');
}
}

