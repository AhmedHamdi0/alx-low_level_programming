#include <stdio.h>
#include <stdlib.h>

/**
 * main - Entry point of the program
 * @argc: The number of command-line arguments
 * @argv: An array of pointers to the command-line arguments
 *
 * Return: 0 if addition is successful, 1 otherwise
 */
int main(int argc, char *argv[])
{
	int sum = 0;
	char *c;

	while (--argc)
	{
		for (c = argv[argc];  *c; c++)
		{
			if (*c < '0' || *c > '9')
			{
				return (printf("Error\n"), 1);
			}
		}
		sum += atoi(argv[argc]);
	}
	printf("%d\n", sum);
	return (0);
}
