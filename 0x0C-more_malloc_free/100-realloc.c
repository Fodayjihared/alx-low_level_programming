#include "main.h"
#include <stdlib.h>

/**
 * _realloc - reallocates a memory block
 * @ptr: pointer to the old memory block
 * @old_size: size of the old memory block
 * @new_size: new size of the memory block
 *
 * Return: a pointer to the newly allocated memory block
 */
void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	unsigned int i;
	void *new_ptr;

	if (new_size == old_size)
	return (ptr);

	if (ptr == NULL)
	return (malloc(new_size));

	if (new_size == 0)
	{
		free(ptr);
		return (NULL);
	}

	new_ptr = malloc(new_size);
	if (new_ptr == NULL)
	return (NULL);

	if (new_size < old_size)
	old_size = new_size;

	for (i = 0; i < old_size; i++)
	{
		((char *)new_ptr)[i] = ((char *)ptr)[i];
	}

	free(ptr);

	return (new_ptr);
}
