#include <stdio.h>

/**
 * main - entry point
 *
 * Description: prints the alphabet in lowercase, and then in uppercase.
 *
 * Return: 0 (success)
 */

int main(void)
{
char ch_low;
char ch_upper;
ch_low = 'a';
ch_upper = 'A';

while (ch_low <= 'z')
{
putchar(ch_low);
ch_low++;
}

while (ch_upper <= 'Z')
{
putchar(ch_upper);
ch_upper++;
}

putchar('\n');
return (0);
}

