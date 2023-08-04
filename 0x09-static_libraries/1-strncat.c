/**
 * _strncat - Concatenates two strings, using at most n bytes from src.
 * @dest: The destination string to which @src will be appended.
 * @src: The source string that will be appended to @dest.
 * @n: The maximum number of bytes from @src to append.
 *
 * Return: A pointer to the resulting string @dest.
 */
char *_strncat(char *dest, char *src, int n)
{
	char *dest_ptr = dest;

	while (*dest_ptr != '\0')
		dest_ptr++;

	while (*src != '\0' && n > 0)
	{
		*dest_ptr = *src;
		dest_ptr++;
		src++;
		n--;
	}

	*dest_ptr = '\0';

	return (dest);
}
