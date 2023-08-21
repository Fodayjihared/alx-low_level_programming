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
	int length = strlen(s);
	int start = 0;
	int end = length - 1;
	char temp;

	while (start < end)
	{
		temp = s[start];
		s[start] = s[end];
		s[end] = temp;
		start++;
		end--;
	}
}
