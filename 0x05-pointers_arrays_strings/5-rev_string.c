#include "main.h"
#include <stdio.h>
#include <string.h>

/**
 * rev_string - Reverse strings
 *
 * @s: The string to reverse
 *
 * Return: Always 0.
 */
void rev_string(char *s)
{
	int i;
	int lenStr = strlen(s);

	for (i = lenStr - 1; i >= 0; i--)
	{
		putchar(s[i]);
	}
	putchar('\n');
}
