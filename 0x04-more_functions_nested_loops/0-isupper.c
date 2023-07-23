#include "main.h"

/**
 * _isupper - Checks if a character is an upper letter
 *
 * Description: This function checks whether the given integer `c`
 *              corresponds to an upper letter.
 *
 * @c: The integer value of the character to be checked
 *
 * Return: 1 if `c` is a lowercase letter, 0 otherwise
 */
int _isupper(int c)
{
if (c >= 'A' && c <= 'Z')
{
return (1);
}

return (0);
}

