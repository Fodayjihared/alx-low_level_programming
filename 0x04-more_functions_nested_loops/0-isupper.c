#include <stdio.h>
#include <ctype.h>
#include "main.h"

/**
 * _isupper - Checks if character is upper
 * @c: The character to check
 *
 * Return: Always 1 (Success).
 */
int _isupper(int c)
{
	if (isupper(c))
	{
		return (1);
	}
	return (0);
}
