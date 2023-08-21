#include "main.h"
#include <string.h>
#include <stdio.h>
#include <ctype.h>

/**
 * print_rev - Prints reversed string
 *
 * @s: The string to print
 *
 * Return: Always 0.
 */
void print_rev(char *s)
{
	int stlen = strlen(s);
	int i;

	for (i = stlen - 1; i >= 0; i--)
	{
		putchar(s[i]);
	}
	putchar('\n');
}
