#include "function_pointers.h"
#include <stdio.h>
#include <stddef.h>

/**
 * array_iterator - iterate over arr ele
 * @array: array
 * @size: how many elem to print
 * @action: pointer to print
 * Return: void
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned int i;

	if (array == NULL || action == NULL)
		return;

	for (i = 0; i < size; i++)
	{
		action(array[i]);
	}
}
