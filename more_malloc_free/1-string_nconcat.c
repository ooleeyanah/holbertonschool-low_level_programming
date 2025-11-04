#include "main.h"
#include <stdlib.h>
/**
 * string_nconcat - concatenates two strings
 * @s1: string one
 * @s2: string two
 * @n: number of bytes
 * Return: pointer to alloc for new string or NULL
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
char *catstr;
unsigned int i, j, len1 = 0, len2 = 0;
if (s1 == NULL)
s1 = "";
if (s2 == NULL)
s2 = "";
while (s1[len1] != '\0')
len1++;
while (s2[len2] != '\0')
len2++;
if (n >= len2)
n = len2;
catstr = malloc(sizeof(char) * (len1 + n + 1));
if (catstr == NULL)
return (NULL);
for (i = 0; i < len1; i++)
catstr[i] = s1[i];
for (j = 0; j < n; j++)
catstr[i + j] = s2[j];
catstr[i + j] = '\0';
return (catstr);
}
