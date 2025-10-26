#include "main.h"
/**
 * *_strcat(char *dest, char *src) - appends src string to dest string
 * @dest: destination
 * @src: source
 * Return: pointer to resulting string dest
 */
char *_strcat(char *dest, char *src)
{
while (*dest != '\0')
{
dest++;
}
while (*src != '\0')
{
*dest = *src;
dest++;
src++;
}
*dest = '\0';
}
