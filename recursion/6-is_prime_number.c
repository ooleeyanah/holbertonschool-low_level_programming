#include "main.h"
/**
 * prime_yay - determines if num is a prime number
 * @n: input number
 * @c: iterator
 * Return: if n is primer then 1, if not then 0
 */
int prime_yay(unsigned int n, unsigned int c)
{
if (n % c == 0)
{
if (n == c)
return (1);
else
return (0);
}
return (0 + prime_yay(n, c + 1));
}
/**
 * is_prime_number - returns int as prime number or 0
 * @n: input number
 * Return: 1 if prime number or 0 if not prime number
 */
int is_prime_number(int n)
{
if (n == 0)
return (0);
if (n < 0)
return (0);
if (n == 1)
return (0);
return (prime_yay(n, 2));
}
