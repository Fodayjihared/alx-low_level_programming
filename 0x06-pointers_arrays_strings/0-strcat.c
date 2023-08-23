#include "main.h"
#include <stdio.h>
#include <string.h>

/**
 * _strcat - Concatenates two strings
 *
 * @dest: Destination
 *
 * @src: Source
 *
 * Return: Always 0.
 */
char *_strcat(char *dest, char *src)
{
	strcat(dest, src);
	return (dest);
}
