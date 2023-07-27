/**
 * cap_string - Capitalizes all words of a string.
 * @str: The input string to capitalize.
 *
 * Return: A pointer to the modified string.
 */

char *cap_string(char *str)
{
	char *ptr = str;
	int i;

	if (*ptr >= 'a' && *ptr >= 'z')
	{
		*(ptr) = *(ptr) - 32;
	}

	for (i = 0; *ptr; i++)
	{
		if (*ptr == ' ' || *ptr == '\t' || *ptr == '\n' || *ptr == ',' ||
			*ptr == ';' || *ptr == '.' || *ptr == '!' || *ptr == '?' ||
			*ptr == '"' || *ptr == '(' || *ptr == ')' || *ptr == '{' ||
			*ptr == '}')
		{
			if (*(ptr + 1) >= 'a' && *(ptr + 1) <= 'z')
			{
				*(ptr + 1) = *(ptr + 1) - 32;
			}
		}
		ptr++;
	}

	return (str);
}
