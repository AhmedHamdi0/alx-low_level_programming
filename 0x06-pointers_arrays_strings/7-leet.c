/**
 * leet - Encodes a string into 1337.
 * @str: The input string to encode.
 *
 * Return: A pointer to the modified string.
 */

char *leet(char *str)
{
	char encodes[8] = {[0] = 'o', [1] = 'l', [3] = 'e', [4] = 'a', [7] = 't'};

	int i;
	while (*str != '\0')
	{
		for (i = 0; i < 8; i++)
		{
			if(*str == encodes[i] || *str == encodes[i] - 32)
			{
				*str = i + '0';
			}
		}
		str++;
	}
	return (str);
}
