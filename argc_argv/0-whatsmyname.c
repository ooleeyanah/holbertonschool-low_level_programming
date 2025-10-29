#include <stdio.h>
/**
 * main - prints its own name
 * @argc: num of command line arguments
 * @argv: string array with command line arguments
 * Return: 0
 */
int main(int argc __attribute__((unused)), char *argv[])
{
printf("%s\n", argv[0]);
return (0);
}
