#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * _strdup - Returns a pointer to a memory
 *
 * @str: Pointer string
 *
 * Return: Always 0.
 */
char *_strdup(char *str)
{
	size_t len = strlen(str);
	char *duplicate = (char *)malloc(len + 1);

	if (str == NULL)
	{
		return (NULL);
	}
	if (duplicate == NULL)
	{
		return (NULL);
	}

	strcpy(duplicate, str);
	return (duplicate);
}
