#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * *str_concat - concatenates two strings
 * @s1: string one
 * @s2: string two
 * Return: pointer to new memory space or NULL
 */
char *str_concat(char *s1, char *s2)
{
char *strout;
unsigned int i, j, len1 = 0, len2 = 0;
if (s1 == NULL)
s1 = "";
if (s2 == NULL)
s2 = "";
while (s1[len1] != '\0')
len1++;
while (s2[len2] != '\0')
len2++;
strout = malloc(sizeof(char) * (len1 + len2 + 1));
if (strout == NULL)
return (NULL);
for (i = 0; i < len1; i++)
strout[i] = s1[i];
for (j = 0; j < len2; j++)
strout[i + j] = s2[j];
strout[len1 + len2] = '\0';
return (strout);
}
