#include "main.h"
#include <stdlib.h>
/**
 * _calloc - allocates mem for array using malloc
 * @nmemb: elements in array
 * @size: number of bytes
 * Return: pointer to new malloc or NULL
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
void *ptr;
unsigned int i;
unsigned char *p;
if (nmemb == 0 || size == 0)
return (NULL);
ptr = malloc(nmemb * size);
if (ptr == NULL)
return (NULL);
p = ptr;
for (i = 0; i < nmemb * size; i++)
p[i] = 0;
return (ptr);
}
