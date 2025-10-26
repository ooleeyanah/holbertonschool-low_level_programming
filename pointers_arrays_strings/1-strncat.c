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
int i = 0;
char *start = dest;
while (*dest != '\0')
{
dest++;
}
while (*(src + i) != '\0')
{
if (i >= n)
{
break;
}
*dest = *(src + i);
dest++;
i++;
}
*dest = '\0';
return (start);
}
