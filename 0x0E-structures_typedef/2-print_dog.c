#include <stdio.h>
#include "dog.h"

/**
 * print_dog - Prints the content of a struct dog
 * @d: Pointer to the struct dog variable to print
 *
 * Description: This function prints the fields of a struct dog.
 * If an element of d is NULL, it prints (nil) instead of the element.
 * If d is NULL, it prints nothing.
 */
void print_dog(struct dog *d)
{
	if (d != NULL)
	{
		printf("Name: %s\n", d->name ? d->name : "(nil)");
		printf("Age: %.6f\n", d->age);
		printf("Owner: %s\n", d->owner ? d->owner : "(nil)");
	}
}
