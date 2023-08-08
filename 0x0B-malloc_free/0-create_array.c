#include "stdlib.h"

/**
 * create_array - Creates an array of characters
 * and initializes it with a specific character.
 *
 * @size: The size of the array to create.
 * @c: The character to initialize the array with.
 *
 * Return: A pointer to the newly created
 * and initialized array, or NULL if allocation fails.
 */

char *create_array(unsigned int size, char c)
{
	char *ptr;

	ptr = (char *)malloc(sizeof(char) * size);

	if (size == 0 || ptr == NULL)
	{
		return (NULL);
	}

	while (size--)
	{
		ptr[size] = c;
	}
	return (ptr);
}
