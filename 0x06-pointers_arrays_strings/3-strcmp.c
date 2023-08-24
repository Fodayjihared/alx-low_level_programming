#include "main.h"
#include <stdio.h>
#include <string.h>

/**
 * _strcmp - Compares strings
 *
 * @s1: First string
 *
 * @s2: Second string
 *
 * Return: Always 0.
 */
int _strcmp(char *s1, char *s2)
{
	while (*s1 && *s2)
	{
		if (*s1 != *s2)
		{
			return (*s1 - *s2);
		}
		s1++;
		s2++;
	}
	return (*s1 - *s2);
}
