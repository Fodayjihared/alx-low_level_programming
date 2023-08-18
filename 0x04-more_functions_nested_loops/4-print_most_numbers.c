#include <stdio.h>
#include <ctype.h>
#include "main.h"

/**
 * print_most_numbers - Prints 0 to 9 except 2 and 4
 *
 * Return: Always 0 (Success).
 */
void print_most_numbers(void)
{
	int a;

	for (a = 0; a < 10; a++)
	{
		if (a == 2 || a == 4)
		{
			continue;
		} else
		{
			putchar(a + '0');
		}
	}
	putchar('\n');
}
