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
int i;
for (i = 0; i < length / 2; i++)
{
temp = s[i];
s[i] = s[length - 1 - i];
s[length - 1 - i] = temp;
}
}

