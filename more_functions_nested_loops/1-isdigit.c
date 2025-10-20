#include "main.h"
/**
 * _isdigit - Shows 1 if the input is a
 * digit. In other cases, shows 0
 *
 * @c: The character in ASCII code
 *
 * Return: 1 for digits. 0 for the rest.
 */
int _isdigit(int c)
{
if (c >= 48 && c <= 57)
{
return (1);
}
else
{
return (0);
}
_putchar('\n');
}
