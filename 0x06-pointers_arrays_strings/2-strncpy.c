/**
 * _strncpy - Copies the first n characters of the src string to the dest.
 * @dest: The destination string where the copy will be stored.
 * @src: The source string to be copied.
 * @n: The maximum number of characters to be copied.
 *
 * Return: A pointer to the resulting string @dest.
 */

char *_strncpy(char *dest, char *src, int n)
{
	int i;

	for (i = 0; i < n && src[i] != '\0'; i++)
		dest[i] = src[i];

	for (; i < n; i++)
		dest[i] = '\0';

	return (dest);
}
