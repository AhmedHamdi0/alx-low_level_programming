/**
* _strlen - Calculates the length of a string.
*
* @s: Pointer to the string whose length will be calculated.
*
* Return: The length of the string (number of characters).
*/

int _strlen(char *s)
{
int counter = 0;
while (*s != '\0')
{
counter++;
s++;
}
return (counter);
}

