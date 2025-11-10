#include "function_pointers.h"
#include <stdio.h>
/**
 * print_name - prints a name
 * @name: the name
 * @f: pointer to function
 * Return: no return
 */
void print_name(char *name, void (*f)(char *))
{
printf("%s\n", name);
}
