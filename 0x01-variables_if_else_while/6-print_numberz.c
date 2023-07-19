#include <stdio.h>

/**
 * main - entry point
 *
 * Description: prints all single digit numbers of starting from 0.
 *
 * Return: 0 (success)
 */

int main(void)
{
short number;
number = 0;

while (number <= 9)
{
putchar(number + 48);
number++;
}

putchar('\n');
return (0);
}

