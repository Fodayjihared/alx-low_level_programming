#include "main.h"
#include <stdio.h>

/**
 * _memset - Fills memmory
 * @s: string
 * @b: bytes
 * @n: number of bytes
 *
 * Return: Always 0.
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		s[i] = b;
	}
	return (s);
}
