/**
 * leet - Encodes a string into 1337.
 * @str: The input string to encode.
 *
 * Return: A pointer to the modified string.
 */

char *leet(char *str)
{
	char *ptr = str;
	char *leet_chars = "aAeEoOtTlL";
	char *leet_replacements = "4433007711";

	while (*ptr != '\0')
	{
		char *leet_ptr = leet_chars;
		while (*leet_ptr != '\0')
		{
			if (*ptr == *leet_ptr)
			{
				*ptr = leet_replacements[leet_ptr - leet_chars];
				break;
			}
			leet_ptr++;
		}
		ptr++;
	}

	return str;
}
