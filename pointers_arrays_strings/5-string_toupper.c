#include "main.h"
/**
 * string_toupper - converst all chars to uppercase
 * @s: pointer to input string
 * Return: pointer to result string
 */
char *string_toupper(char *s)
{
int i = 0;
while (s[i] != '\0')
{
if (s[i] >= 'a' && s[i] <= 'z')
{
s[i] = s[i] - 32;
}
i++;
}
return (s);
}
