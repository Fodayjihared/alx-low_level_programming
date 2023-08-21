#include "main.h"
#include <string.h>
#include <stdio.h>

/**
 * _puts - Print the string
 *
 * @str: The string to be printed
 *
 * Return: Always 0.
 */
void _puts(char *str)
{
	while (*str != '\0')
	{
		puts(str);
		str++;
		break;
	}
}
