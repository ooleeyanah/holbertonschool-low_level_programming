#include "function_pointers.h"
/**
 * int_index - searches for integer
 * @array: array
 * @size: num of elements in array
 * @cmp: pointer to function to compare vals
 * Return: index of first el with no 0 or -1
 */
int int_index(int *array, int size, int (*cmp)(int))
{
int i;
if (array && cmp)
{
if (size <= 0)
return (-1);
for (i = 0; i < size; i++)
if (cmp(array[i]))
return (i);
}
return (-1);
}
