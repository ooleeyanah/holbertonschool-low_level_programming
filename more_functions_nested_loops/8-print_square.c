#include "main.h"
/**
 * print_square - prints square based on input
 * @size: times the line is printed
 * Return: no return
 */
void print_square(int size)
{
int i, s;
for (i = 0; i < n; i++)
{
for (s = 0; s < i; s++)
{
_putchar(35);
}
if (i != size - 1)
_putchar('\n');
}
_putchar('\n');
}
