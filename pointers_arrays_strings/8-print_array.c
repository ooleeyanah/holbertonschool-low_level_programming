#include "main.h"
#include <stdio.h>
/**
 * print_array - prints n elements of integer array
 * @a: array input
 * @n: number of elements to print
 * Return: no return
 */
void print_array(int *a, int n)
{
int i;
for (i = 0; i < n; i++)
{
printf("%d", a[i]);
if (i != n - 1)
printf(", ");
}
printf("\n");
}
