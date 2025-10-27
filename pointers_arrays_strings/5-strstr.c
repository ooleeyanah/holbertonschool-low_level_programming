#include "main.h"
/**
 * _strstr - locates needle substring in haystack str
 * @haystack: string to search
 * @needle: substring to look for in haystack
 * Return: pointer to beginning of substring or NULL if not found
 */
char *_strstr(char *haystack, char *needle)
{
int i, j;
if (*needle == '\0')
return (haystack);
for (i = 0; haystack[i] != '\0'; i++)
{
for (j = 0; needle[j] != '\0'; j++)
{
if (haystack[i + j] != needle[j])
break;
}
if (needle[j] == '\0')
return (&haystack[i]);
}
return (0);
}
