#include "function_pointers.h"
#include "3-main.h"

/**
 * print_name - prints a name using a given printing function
 * @name: name of the person
 * @f: pointer to the printing function
 *
 * Return: Nothing.
 */

void print_name(char *name, void (*f)(char *))
{
	if (name && f)
		f(name);
}
