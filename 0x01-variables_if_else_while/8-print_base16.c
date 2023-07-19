#include <stdio.h>

/**
 * main - entry point
 *
 * Description: prints all the numbers of base 16 in lowercase.
 *
 * Return: 0 (success)
 */

int main(void)
{
char ch = 'a';
char number = 0;

while (number <= 9)
{
putchar(number + 48);
number++;
}

while (ch <= 'f')
{
putchar(ch);
ch++;
}

putchar('\n');
return (0);
}

