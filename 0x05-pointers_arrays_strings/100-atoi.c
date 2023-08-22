#include <stdio.h>
#include <string.h>
#include <limits.h>

/**
 * _atoi - Converts a strings to int
 *
 * @s: The string to be converted
 *
 * Return: Always 0.
 */
int _atoi(char *s)
{
	int result = 0;
	int sign = 1;
	int i = 0;

	while (s[i] == ' ')
	{
		i++;
	}

	if (s[i] == '-' || s[i] == '+')
	{
		sign = (s[i] == '-') ? -1 : 1;
		i++;
	}

	while (s[i] >= '0' && s[i] <= '9')
	{
		if (result > (INT_MAX - (s[i] - '0')) / 10)
		{
			return (sign == -1) ? INT_MIN : INT_MAX;
		}
		result = result * 10 + (s[i] - '0');
		i++;
	}
	return (result * sign);
}
