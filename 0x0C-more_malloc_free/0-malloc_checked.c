#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * malloc_checked - Allocare memory using malloc
 *
 * @b: Size in bytes
 *
 * Return:Pointer to memory.
 */
void *malloc_checked(unsigned int b)
{
	void *ptr = malloc(b);

	if (ptr == NULL)
	{
		fprintf(stderr, "Memory allocation failed. Exiting with status 98\n");
		exit(98);
	}

	return (ptr);
}
