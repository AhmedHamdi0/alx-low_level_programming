/**
 * leet - Encodes a string into 1337.
 * @str: The input string to encode.
 *
 * Return: A pointer to the modified string.
 */

char *leet(char *str)
{
	char encodes[8] = {'o', 'l', 'e', 'a', 't', 'O', 'L', 'E'};
	char replacements[8] = {'0', '1', '3', '4', '7', '0', '1', '3'};

	while (*str != '\0')
	{
		for (int i = 0; i < 8; i++)
		{
			if (*str == encodes[i])
			{
				*str = replacements[i];
				break;
			}
		}
		str++;
	}

	return (str);
}
