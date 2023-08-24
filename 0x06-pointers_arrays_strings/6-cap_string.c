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
	bool new_word;
	char c;
	char separators[] = " \t\n,;.!?\"(){}";

	for (j = 0; str[j] != '\0'; j++)
	{
		c = str[j];
		for (i = 0; separators[i] != '\0'; i++)
		{
			if (separators[i] == c)
			{
				break;
			}
		}
		if (!isspace(c) && new_word)
		{
			if (islower(c))
			{
				str[j] = toupper(c);
			}
			new_word = false;
		} else if (isspace(c))
		{
			new_word = true;
		} else if (!isspace(c) && !new_word)
		{
			if (isupper(c))
			{
				str[j] = tolower(c);
			}
		}
	}
	return (str);
}
