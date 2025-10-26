#include "main.h"
/**
 * *_strcat - appends src string to dest string
 * @dest: destination
 * @src: source
 * Return: pointer to resulting string dest
 */
char *_strcat(char *dest, char *src)
{
char *start = dest;
while (*dest != '\0')
{
dest++;
}
while (*src != '\0')
{
*dest = *src;
src++;
}
*dest = '\0';
return (start);
}
