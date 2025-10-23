#include "main.h"
/**
 * _atoi - converts a string to an integer
 * @s: string
 * Return: int string
 */
int _atoi(char *s)
{
int i = 0;
int sign = 1;
unsigned int num = 0;
while (s[i] != '\0')
{
if (s[i] == '-')
sign *= -1;
else if (s[i] >= '0' && s[i] <= '9')
break;
i++;
}
while (s[i] >= '0' && s[i] <= '9')
{
num = (num * 10) + (s[i] - '0');
i++;
}
return (sign *num);
}
