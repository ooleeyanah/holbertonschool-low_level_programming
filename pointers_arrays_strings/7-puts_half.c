#include "main.h"
/**
 * puts_half - prints second half of string
 * @str: string input
 * Return: no return
 */
void puts_half(char *str)
{
int count = 0, i;
while (count >= 0)
{
if (str[count] == '\0')
{
_putchar('\n');
break;
count++;
}
if (str[count] % 2 == 1)
i = count / 2;
else
i = (count - 1) / 2;
for (i++; i < count; i++)
_putchar(str[i]);
_putchar('\n');
}
}
