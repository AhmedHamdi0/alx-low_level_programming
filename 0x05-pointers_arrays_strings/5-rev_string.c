#include "main.h"

/**
* rev_string - Reverses a string in place.
*
* @s: Pointer to the string to be reversed.
*/
void rev_string(char *s)
{
int length = 0;
char temp;

while (s[length] != '\0')
{
length++;
}

int start, end;
start = 0;
end = length - 1;

while (start < end)
{
temp = s[start];
s[start] = s[end];
s[end] = temp;
start++;
end--;
}
}

