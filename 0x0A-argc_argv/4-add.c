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
int i, sum = 0;

if (argc == 1)
{
printf("0\n");
return (0);
}

for (i = 1; i < argc; i++)
{
int num = atoi(argv[i]);

if (num < '0' || num > '9')
{
printf("Error\n");
return (1);
}

sum += num;
}

printf("%d\n", sum);
return (0);
}