#include "main.h"
/**
 * _pow_recursion - returns value of x to power of y
 * @x: int one
 * @y: int two
 * Return: value of x to the power of y
 */
int _pow_recursion(int x, int y)
{
if (y < 0)
return (-1);
if (y == 0)
return (1);
return (x * _pow_recursion(x, y - 1));
}
