#include "main.h"
#include <stdio.h>

/**
 * _strspn - get lenght of prefix substr
 * @s: string
 * @accept: bytes
 *
 * Return: Always 0.
 */
unsigned int _strspn(char *s, char *accept)
{
	unsigned int length = 0;

	while (*s != '\0' && *s != '\n')
	{
		char *a = accept;

		while (*a != '\0')
		{
			if (*s == *a)
			{
				length++;
				break;
			}
			a++;
		}
		if (*a == '\0')
		{
			break;
		}
		s++;
	}
	return (length);
}
