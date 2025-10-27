#include "main.h"
/**
 * _strpbrk - searches for first of any byte from accept string in s string
 * @s: string
 * @accept: bytes to match
 * Return: pointer to s byte that matches one in accept or 0 if none
 */
char *_strpbrk(char *s, char *accept)
{
unsigned int i, j, count;
count = 0;
for (i = 0; s[i] != '\0'; i++)
{
for (j = 0; accept[j] != '\0'; j++)
{
if (s[i] == accept[j])
break;
}
if (accept[j] == '\0')
return (count);
count++;
}
return (count);
}
