#include <stdio.h>
#include <string.h>

/**
 * puts_half - Prints half of a string
 *
 * @str: The string to print
 *
 * Return: Always 0.
 */
void puts_half(char *str)
{
	int length = strlen(str);
	int start_index;
	int i;

	if (length % 2 == 0)
	{
		start_index = length / 2;
	} else
	{
		start_index = (length - 1) / 2;
	}

	for (i = start_index; i < length; i++)
	{
		putchar(str[i]);
	}
	putchar('\n');
}
