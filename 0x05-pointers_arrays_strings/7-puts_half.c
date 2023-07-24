#include "main.h"

/**
* puts_half - Prints the second half of a string.
*
* @str: Pointer to the string to be printed.
*/

void puts_half(char *str)
{
int length = 0;
while (str[length])
{
length++;
}
length++;
if (length % 2 == 0)
{
for (int i = length / 2; str[i] != '\0' ; i++)
{
_putchar(str[i]);
}
}
else
{
for (int i = ((length - 1) / 2); str[i] != '\0' ; i++)
{
_putchar(str[i]);
}
}
}

