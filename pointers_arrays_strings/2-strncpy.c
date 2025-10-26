#include "main.h"
/**
 * *_strncpy - copies string
 * @dest: destination
 * @src: source
 * @n: number of chars
 * Return: copied string
 */
char *_strncpy(char *dest, char *src, int n)
{
int count = 0;
int i = 0;
while (count >= 0)
{
if (n <= count)
break;
*(dest + count) = *(src + count);
if (*(src + count) == '\0')
break;
count++;
}
if (n > count)
{
for (i = 0; i < (n - count); i++)
{
*(dest + i) = '\0';
}
}
return (dest);
}
