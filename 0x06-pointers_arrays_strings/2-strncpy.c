#include "main.h"
#include <stdio.h>
#include <string.h>

/**
 * _strncpy - Copies a string
 *
 * @dest: Destination
 *
 * @src: Source
 *
 * @n: Number of bytes
 *
 * Return: Always 0.
 */
char *_strncpy(char *dest, char *src, int n)
{
	strncpy(dest, src, n);
	return (dest);
}
