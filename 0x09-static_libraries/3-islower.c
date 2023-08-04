#include "main.h"

/**
 * _islower - Checks if a character is a lowercase letter
 *
 * Description: This function checks whether the given integer `c`
 *              corresponds to a lowercase letter.
 *
 * @c: The integer value of the character to be checked
 *
 * Return: 1 if `c` is a lowercase letter, 0 otherwise
 */
int _islower(int c)
{
if (c >= 'a' && c <= 'z')
{
return (1);
}

return (0);
}

