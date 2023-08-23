#include "main.h"
#include <stdio.h>
#include <string.h>

/**
 * _strncat - Concatenates strings
 *
 * @dest: Destination
 *
 * @src: Source
 *
 * @n: Number of bytes
 *
 * Return: Always 0.
 */
char *_strncat(char *dest, char *src, int n)
{
	strncat(dest, src, n);
	return (dest);
}
