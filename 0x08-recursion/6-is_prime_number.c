#include "main.h"
#include <stdio.h>

/**
 * is_prime_recursive - chek if is prime
 *
 * @n: Number
 *
 * @divisor: Divisor
 *
 * Return: Always 0.
 */
int is_prime_recursive(int n, int divisor)
{
	if (n <= 1)
	{
		return (0);
	}
	if (divisor == 1)
	{
		return (1);
	}
	if (n % divisor == 0)
	{
		return (0);
	}
	return (is_prime_recursive(n, divisor - 1));
}
/**
 *  is_prime_number - Prints prime numbers
 *
 *  @n: Number
 *
 * Return: Always 0.
 */
int is_prime_number(int n)
{
	return (is_prime_recursive(n, n - 1));
}
