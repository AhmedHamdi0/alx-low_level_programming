/**
 * cap_string - Capitalizes all words of a string.
 * @str: The input string to capitalize.
 *
 * Return: A pointer to the modified string.
 */

char *cap_string(char *str)
{
	int i, j;

	char sperators[13] = {' ', '\t', '\n', ',', ';', '.',
					'!', '?', '"', '(', ')', '{', '}'};

	for (i = 0; str[i] != '\0'; i++)
	{
		if (i == 0 && str[i] >= 'a' && str[i] <= 'z')
			str[i] -= 32;

		for (j = 0; j < 13; j++)
		{
			if (str[i] == sperators[j])
			{
				if (str[i + 1] >= 'a' && str[i + 1] <= 'z')
				{
					str[i + 1] -= 32;
				}
			}
		}
	}

	return (s);
}
