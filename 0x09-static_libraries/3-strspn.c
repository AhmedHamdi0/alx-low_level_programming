/**
 * _strspn - Gets the length of a prefix substring.
 * @s: Pointer to the string to be scanned.
 * @accept: Pointer to the string containing the characters to match.
 *
 * Return: The number of bytes in the initial segment of s which consist only
 *         of bytes from accept.
 */

unsigned int _strspn(char *s, char *accept)
{
	unsigned int count = 0;
	int found = 1;

	while (*s != '\0' && found)
	{
		char *a = accept;

		found = 0;

		while (*a != '\0')
		{
			if (*s == *a)
			{
				found = 1;
				count++;
				break;
			}
			a++;
		}

		s++;
	}

	return (count);
}
