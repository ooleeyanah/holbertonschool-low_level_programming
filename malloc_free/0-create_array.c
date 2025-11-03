#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * *create_array - creates array of chars
 * @size: size of array
 * @c: char initialize
 * Return: pointer to array or NULL if failure
 */
char *create_array(unsigned int size, char c)
{
char *cr;
unsigned int i;
if (size == 0)
return (NULL);
cr = malloc(sizeof(c) * size);
if (cr == NULL)
return (NULL);
for (i = 0; i < size; i++)
cr[i] = c;
return (cr);
}
