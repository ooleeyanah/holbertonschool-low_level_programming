#include "main.h"
/**
 * *_strncat - concatenates two strings
 * @dest: destination
 * @src: source
 * @n: number of chars
 * Return: point to result string dest
 */
char *_strncat(char *dest, char *src, int n)
{
char *start = dest;
while (*dest != '\0')
{
dest++;
}
while (*src != '\0')
{
*dest = *src;
if (src > n)
{
break:
}
dest++;
src++;
}
*dest = '\0';
return (start);
}
