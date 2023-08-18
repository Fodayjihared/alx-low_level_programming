#include <stdio.h>
#include <ctype.h>
#include "main.h"

/**
 * _isdigit - Checks if character is digit
 * @c: The character to check
 *
 * Return: Always 1 (Success).
 */
int _isdigit(int c)
{
	if (isdigit(c))
	{
		return (1);
	}
	return (0);
}
