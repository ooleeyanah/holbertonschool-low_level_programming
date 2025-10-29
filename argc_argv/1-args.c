#include <stdio.h>
/**
 * main - print num of arguments passed from command line
 * @argc: num of command line arguments
 * @argv: array with command line arguments
 * Return: 0
 */
int main(int argc, char *argv[])
{
int i;
for (i = 0; i < argc; i++)
printf("%s\n", argv[i]);
return (0);
}
