#include "main.h"
/**
 * _strlen_recursion - returns length of string
 * @s: string
 * Return: length of string
 */
int _strlen_recursion(char *s)
{ int count = 0;
if (*s != '\0')
{
_strlen_recursion(s + 1);
count++;
}
return (count);
}
