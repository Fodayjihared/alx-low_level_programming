#include "main.h"
#include <stdio.h>
#include <string.h>

/**
 * _strlen - Returns length of string
 *
 * @s: The string's length to find
 *
 * Return: Always 0.
 */
int _strlen(char *s)
{
	int count = 0;

	while (*s != '\0')
	{
		count++;
		s++;
	}
	return (count);
}
