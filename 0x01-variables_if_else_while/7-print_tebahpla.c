#include <stdio.h>

/**
 * main - entry point
 *
 * Description: prints the alphabet in lowercase in reverse.
 *
 * Return: 0 (success)
 */

int main(void)
{
char ch = 'z';

while (ch >= 'a')
{
putchar(ch);
ch--;
}
putchar('\n');
return (0);
}

