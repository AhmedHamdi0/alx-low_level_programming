#include <stdio.h>

/**
 * main - entry point
 *
 * Description: prints all single digit numbers of base 10 starting from 0.
 *
 * Return: 0 (success)
 */

int main(void)
{
char number;
number = 0;

while (number <= 9)
{
printf("%i",number);
number++;
}

putchar('\n');
return (0);
}

