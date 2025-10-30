#include <stdio.h>
#include <stdlib.h>
/**
 * main - print num of arguments passed from command line
 * @argc: num of command line arguments
 * @argv: array with command line arguments
 * Return: 0
 */
int main(int argc, char *argv[])
{
if (argc != 3)
{
printf("Error\n");
return (1);
}
printf("%d\n", atoi(argv[1]) * atoi(argv[2]));
return (0);
}
