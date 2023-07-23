#include <stdio.h>

/**
* main - Prints numbers from 1 to 100 with replacements.
*
* Description: This function prints numbers from 1 to 100. For multiples of 3,
* it prints "Fizz," for multiples of 5, it prints "Buzz," and for multiples
* of both 3 and 5, it prints "FizzBuzz."
*
* Return: 0 (on success)
*/

int main(void)
{
int i;
for (i = 1; i <= 100; i++)
{
if (i % 3 == 0 && i % 5 != 0)
{
printf("Fizz ");
}
else if (i % 3 != 0 && i % 5 == 0)
{
printf("Buzz ");
}
else if (i % 3 == 0 && i % 5 == 0)
{
printf("FizzBuzz ");
}
else
{
printf("%i ", i);
}
}

return (0);
}

