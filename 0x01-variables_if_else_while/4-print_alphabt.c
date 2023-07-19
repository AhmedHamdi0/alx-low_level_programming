#include <stdio.h>

/**
 * main - entry point
 *
 * Description: prints the alphabet in lowercase except e and q.
 *
 * Return: 0 (success)
 */

int main(void)
{
char ch_low;
ch_low = 'a';

while (ch_low <= 'z')
{
if (ch_low == 'e' || ch_low == 'q')
{
ch_low++;
}
putchar(ch_low);
ch_low++;
}

putchar('\n');
return (0);
}

