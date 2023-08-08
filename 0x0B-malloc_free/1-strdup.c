#include <stdlib.h>

/**
 * _strdup - Duplicates a string using malloc.
 * @str: The string to be duplicated.
 *
 * Return: A pointer to the newly allocated
 * duplicated string, or NULL if memory allocation fails.
 */
char *_strdup(char *str)
{
	char *ptr;
	int length = 0;
	int i;

	if (str == NULL)
	{
		return (NULL);
	}

	while (str[length] != '\0')
	{
		length++;
	}

	ptr = (char *)malloc(sizeof(char) * (length + 1));

	if (ptr == NULL)
	{
		return (NULL);
	}
	else
	{
		for (i = 0; i < length; i++)
		{
			ptr[i] = str[i];
		}
		ptr[length] = '\0';
	}

	return (ptr);
}
