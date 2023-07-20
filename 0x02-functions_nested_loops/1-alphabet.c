#include "main.h"

/**
 * print_alphabet - Prints the lowercase alphabet using _putchar
 *
 * Description: prints the lowercase alphabet from 'a' to 'z'.
 *
 * Return : void
 */
void print_alphabet(void)
{
char ch_low = 'a';

while (ch_low <= 'z')
{
_putchar(ch_low);
ch_low++;
}

_putchar('\n');
}

