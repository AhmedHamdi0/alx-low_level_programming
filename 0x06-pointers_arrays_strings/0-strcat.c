/**
 * _strcat - Concatenates two strings.
 * @dest: The destination string to which @src will be appended.
 * @src: The source string that will be appended to @dest.
 *
 * Return: A pointer to the resulting string @dest.
 */

char *_strcat(char *dest, char *src)
{
	char *dest_ptr = dest;

	while (*dest_ptr != '\0')
		dest_ptr++;

	while (*src != '\0')
	{
		*dest_ptr = *src;
		dest_ptr++;
		src++;
	}

	*dest_ptr = '\0';

	return (dest);
}
