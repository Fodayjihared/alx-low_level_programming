#include "main.h"
#include <stdio.h>

/**
 * _print_rev_recursion - Prints in reverse
 *
 * @s: String
 *
 * Return: Always 0.
 */
void _print_rev_recursion(char *s)
{
	if (*s == '\0')
	{
		return;
	}
	_print_rev_recursion(s + 1);
	putchar(*s);
}

