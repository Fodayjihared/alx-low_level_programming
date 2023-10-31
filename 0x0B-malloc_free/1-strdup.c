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
	char *duplicate = (char *)malloc((len + 1) * sizeof(char));

	if (str == NULL)
	{
		printf("Input string is NULL. Cannot duplicate.\n");
		return (NULL);
	}

	if (duplicate == NULL)
	{
		printf("Failed to allocate memory\n");
		return (NULL);
	}

	strcpy(duplicate, str);
	return (duplicate);
}
