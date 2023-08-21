#include "main.h"
#include <stdio.h>

/**
 * swap_int - Swaps two values
 *
 * @a: First value
 * @b: Second value
 *
 * Return: Always 0.
 */
void swap_int(int *a, int *b)
{
	int temp;

	temp = *a;
	*a = *b;
	*b = temp;
}
