#include "main.h"
#include <string.h>
#include <stdio.h>

/**
 * print_array - Prints elements of array
 *
 * @a: Pointer a
 *
 * @n: The element to be printed
 *
 * Return: Always 0.
 */
void print_array(int *a, int n)
{
	int i;

	for (i = 0; i < n; i++)
	{
		printf("%d", a[i]);

		if (i < n - 1)
		{
			printf(", ");
		}
	}
	printf("\n");
}
