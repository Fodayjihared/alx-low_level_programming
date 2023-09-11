#include "main.h"
#include <stdio.h>

int wildcmp_helper(char *s1, char *s2);

/**
 * wildcmp - Compare two strings considering wildcard'*'.
 * @s1: The first string.
 * @s2: The second string.
 *
 * Return: 1 if the strings are identical, 0 otherwise.
 */
int wildcmp(char *s1, char *s2)
{
	return (wildcmp_helper(s1, s2));
}
/**
 * wildcmp_helper - compares two strngs
 *
 * @s1: First string
 *
 * @s2: Second string
 *
 * Return: Always 0.
 */
int wildcmp_helper(char *s1, char *s2)
{
	if (*s1 == '\0' && *s2 == '\0')
	{
		return (1);
	}
	if (*s2 == '*')
	{
		if (wildcmp_helper(s1, s2 + 1))
		{
			return (1);
		}
		if (*s1 != '\0' && wildcmp_helper(s1 + 1, s2))
		{
			return (1);
		}
		return (0);
	}
	if (*s1 == *s2 || *s2 == '?')
	{
		return (wildcmp_helper(s1 + 1, s2 + 1));
	}
	return (0);
}
