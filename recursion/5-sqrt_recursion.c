#include "main.h"
/**
 * actual_power - first function to return square root of num
 * @n: number
 * @c: iterator
 * Return: natural square root of n or -1
 */
int actual_power(int n, int c)
{
if (c % (n / c) == 0)
{
if (c * (n / c) == n)
return (c);
else
return (-1);
}
return (0 + actual_power(n, c + 1));
}
/**
 * _sqrt_recursion - returns natural square root of num
 * @n: input number
 * Return: natural square root of n
 */
int _sqrt_recursion(int n)
{
if (n < 0)
return (-1);
if (n == 0)
return (0);
if (n == 1)
return (1);
return (actual_power(n, 2));
}
