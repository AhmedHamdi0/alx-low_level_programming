#include "main.h"

/**
* _strcpy - Copies the string pointed to by src to dest.
*
* @dest: Pointer to the destination buffer.
* @src: Pointer to the source string.
*
* Return: A pointer to the destination buffer.
*/

char *_strcpy(char *dest, char *src)
{
char *dest_start = dest;

while (*src != '\0')
{
*dest = *src;
dest++;
src++;
}

*dest = '\0';

return (dest_start);
}

