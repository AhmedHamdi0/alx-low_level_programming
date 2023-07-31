#define NULL ((void *)0)

/**
 * _strchr - Locates the first occurrence of character c in string s.
 * @s: Pointer to the string to search.
 * @c: The character to locate.
 *
 * Return: A pointer to the first occurrence of the character c in s,
 *         or NULL if the character is not found.
 */

char *_strchr(char *s, char c)
{
	while (*s != '\0')
	{
		if (*s == c)
		{
			return (s);
		}
		s++;
	}

	return (NULL);
}
