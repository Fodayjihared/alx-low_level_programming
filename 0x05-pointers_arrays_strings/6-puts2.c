#include "main.h"
#include <stdio.h>
#include <string.h>

/**
 * puts2 - Print strings
 *
 * @str: The string to print
 *
 * Return: Always 0.
 */
void puts2(char *str)
{
	int i = 0;

	while (str[i] != '\0')
	{
		putchar(str[i]);
		i += 2;
	}
	putchar('\n');
}
