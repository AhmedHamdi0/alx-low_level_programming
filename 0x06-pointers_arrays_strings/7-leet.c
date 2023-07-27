/**
 * leet - Encodes a string into 1337.
 * @str: The input string to encode.
 *
 * Return: A pointer to the modified string.
 */

char *leet(char *str)
{
	int i, j;

	char *leet_chars = "aAeEoOtTlL";
	char *leet_encodes = "4433007711";

	for (i = 0; str[i] != '\0'; i++)
	{
		for (j = 0; j < 10; j++)
		{
			if (str[i] == leet_chars[j])
			{
				str[i] = leet_encodes[j];
			}
		}
	}

	return (str);
}
