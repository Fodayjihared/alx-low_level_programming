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
	int count = 0;

	while (*str != '\0')
	{
		puts(str);
		count++;
		break;
	}
}
