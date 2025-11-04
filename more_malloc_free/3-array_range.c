#include "main.h"
#include <stdlib.h>
/**
 * array_range - creates array of integers
 * @min: minimum int
 * @max: maximum int
 * Return: pointer to new array or NULL
 */
int *array_range(int min, int max)
{
int *arr;
int i;
if (min > max)
return (NULL);
arr = malloc((max - min + 1) * sizeof(int));
if (arr == NULL)
return (NULL);
for (i = 0; i <= max - min; i++)
arr[i] = min + i;
return (arr);
}
