#include "main.h"

/**
 * _isalpha - Checks if a character is a letter.
 *
 * Description: This function checks whether the given integer `c` is letter.
 *
 * @c: The integer value of the character to be checked
 *
 * Return: 1 if `c` is a letter, 0 otherwise
 */
int _isalpha(int c)
{
if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
{
return (1);
}

return (0);
}

