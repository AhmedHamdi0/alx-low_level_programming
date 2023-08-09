/**
 * _strlen - Returns the length of a string.
 * @s: The string.
 *
 * Return: The length of the string.
 */

int _strlen(char *s)
{
	int length = 0;

	while (*s != '\0')
	{
		length++;
		s++;
	}

	return (length);
}

/**
 * check_palindrome - Recursive helper function to check palindromicity.
 * @s: The string to be checked.
 * @start: The starting index of the string.
 * @end: The ending index of the string.
 *
 * Return: 1 if s is a palindrome, 0 otherwise.
 */

int check_palindrome(char *s, int start, int end)
{
	if (start >= end)
	{
		return (1);
	}

	if (s[start] != s[end])
	{
		return (0);
	}

	return (check_palindrome(s, start + 1, end - 1));
}

/**
 * is_palindrome - Checks if a string is a palindrome.
 * @s: The string to be checked.
 *
 * Return: 1 if s is a palindrome, 0 otherwise.
 */

int is_palindrome(char *s)
{
	int length = _strlen(s);

	return (check_palindrome(s, 0, length - 1));
}
