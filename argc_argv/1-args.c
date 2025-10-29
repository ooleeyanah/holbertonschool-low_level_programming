#include <stdio.h>
/**
 * main - print num of arguments passed from command line
 * @argc: num of command line arguments
 * @argv: array with command line arguments
 * Return: 0
 */
int main(int argc, char *argv[]__attribute__((unused)))
{
printf("%d\n", argc - 1);
return (0);
}
