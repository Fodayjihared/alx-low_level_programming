#include <stdio.h>
#include <ctype.h>
#include "main.h"

/**
 * print_numbers - Prints from 0 to 9
 *
 * Return: Always 0 (Success).
 */
void print_numbers(void)
{
	int i;

	for (i = 0; i < 10; i++)
	{
		putchar(i + '0');
	}
	putchar('\n');
}
