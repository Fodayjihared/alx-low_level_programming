#include "main.h"
#include <stdio.h>

/**
 * _sqrt_helper - calculate square root recursively
 *
 * @n: Number
 *
 * @guess: Guess
 *
 * Return: Always 0.
 */
int _sqrt_helper(int n, int guess)
{
	if (guess * guess == n)
	{
		return (guess);
	}
	if (guess * guess > n)
	{
		return (-1);
	}
	return (_sqrt_helper(n, guess + 1));
}
/**
 * _sqrt_recursion - Calculate the natural square root of a number.
 * @n: The number for which to find the square root.
 *
 * Return: Returns square root
 */
int _sqrt_recursion(int n)
{
	if (n < 0)
	{
		return (-1);
	}
	return (_sqrt_helper(n, 0));
}

