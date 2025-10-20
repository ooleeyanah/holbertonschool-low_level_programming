#include "main.h"
/**
 * print_diagonal - prints diagonal line based on input
 * @n: times the line is printed
 * Return: no return
 */
void print_diagonal(int n)
{
int i, a;
for (i = 0; i < n; i++)
{
for (a = 0; a < i; a++)
{
_putchar(' ');
}
_putchar(92);
if (i < (n - 1))
_putchar('\n');
}
_putchar('\n');
}
