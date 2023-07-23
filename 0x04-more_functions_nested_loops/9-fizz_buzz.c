#include <stdio.h>

/**
 * fizz_buzz - Prints numbers from 1 to 100 with replacements.
 *
 * Description: This function prints numbers from 1 to 100. For multiples of 3,
 * it prints "Fizz," for multiples of 5, it prints "Buzz," and for multiples
 * of both 3 and 5, it prints "FizzBuzz."
 */

void fizz_buzz(void)
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
printf("\n");
}

