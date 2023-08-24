#include "main.h"
#include <stdio.h>
#include <stdbool.h>
#include <ctype.h>

/**
 * cap_string - Capitalizes word
 *
 * @str: String
 *
 * Return: Always 0.
 */
char *cap_string(char *str)
{
	int i;
	int j;
	char c;
	char separators[] = " \t\n,;.!?\"(){}";
	bool new_word = true;

	for (j = 0; str[j] != '\0'; j++)
	{
		c = str[j];
		for (i = 0; separators[i] != '\0'; i++)
		{
			if (separators[i] == c)
			{
				new_word = true;
				break;
			}
		}
		if (new_word && islower(c))
		{
			str[j] = toupper(c);
			new_word = false;
		} else if (!new_word && isupper(c))
		{
			str[j] = tolower(c);
		}
		if (!isspace(c))
		{
			new_word = false;
		}
	}
	return (str);
}
