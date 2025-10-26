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
i = 0;
char *start = dest;
while (*dest != '\0')
{
dest++;
}
while (*(src + i) != '\0')
{
*dest = *(src + i);
if (i > n)
{
break;
}
dest++;
i++;
}
*dest = '\0';
return (start);
}
