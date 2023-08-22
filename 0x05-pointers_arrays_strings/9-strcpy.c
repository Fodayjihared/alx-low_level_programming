#include <stdio.h>
#include <string.h>

/**
 * _strcpy - Copies a string
 *
 * @dest: Terminating null byte
 *
 * @src: The string to copy
 *
 * Return: Always 0.
 */
char *_strcpy(char *dest, char *src)
{
	char *original_dest = dest;

	while (*src != '\0')
	{
		*dest = *src;
		dest++;
		src++;
	}
	*dest = '\0';
	return (original_dest);
}
