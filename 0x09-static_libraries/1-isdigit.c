#include "main.h"

/**
* _isdigit - Checks if a character is an digit
*
* Description: This function checks whether the given integer `c`
*              corresponds to a digit (0 through 9).
*
* @c: The integer value of the character to be checked
*
* Return: 1 if `c` is a lowercase letter, 0 otherwise
*/
int _isdigit(int c)
{
if (c >= '0' && c <= '9')
{
return (1);
}

return (0);
}

