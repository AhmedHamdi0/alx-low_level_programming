#include <stdio.h>

/** 
* main - finds and prints the largest prime factor of the number 612852475143.
* Return: Always 0.
*/

int main(void)
{
unsigned long num = 612852475143;
unsigned long factor = 2;

while (factor * factor <= num)
{
if (num % factor == 0)
{
num /= factor;
}
else
{
factor++;
}
}
printf("%lu\n", num);

return 0;
}

