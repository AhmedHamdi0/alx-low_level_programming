#include <stdlib.h>

/**
 * str_concat - Concatenates two strings.
 * @s1: The first string.
 * @s2: The second string.
 *
 * Return: A pointer to a newly allocated string
 * which contains the concatenated result, or NULL on failure.
 */

char *str_concat(char *s1, char *s2)
{
	int l1 = 0, l2 = 0, i;
	char *ptr;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	while (s1[l1] != '\0')
	{
		l1++;
	}
	while (s2[l2] != '\0')
	{
		l2++;
	}

	ptr = (char *)malloc(sizeof(char) * (l1 + l2) + 1);

	if (ptr == NULL)
	{
		return (NULL);
	}
	else
	{
		for (i = 0; i < l1; i++)
		{
			ptr[i] = s1[i];
		}

		for (i = 0; i < l2; i++)
		{
			ptr[l1 + i] = s2[i];
		}
		ptr[l1 + i] = '\0';
	}

	return (ptr);
}
