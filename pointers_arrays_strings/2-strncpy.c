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
while (count >= 0)
{
*(dest + count) = *(src + count);
if (*(src + count) == '\0')
break;
count++;
if (n > count)
break;
}
return (dest);
}
