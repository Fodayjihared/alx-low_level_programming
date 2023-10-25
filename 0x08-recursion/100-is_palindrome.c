#include "main.h"
#include <string.h>
#include <stdio.h>

int is_palindrome_helper(char *s, int start, int end);

/**
 * is_palindrome - Check if a string is a palindrome.
 * @s: The input string.
 *
 * Return: 1 if the string is a palindrome, 0 otherwise.
 */
int is_palindrome(char *s)
{
	int len = strlen(s);

	return (is_palindrome_helper(s, 0, len - 1));
}
/**
 * is_palindrome_helper - Check if a string is palindrom
 * @s: The input string.
 * @start: The starting index.
 * @end: The ending index.
 *
 * Return: 1 or 0
 */
int is_palindrome_helper(char *s, int start, int end)
{
	if (start >= end)
	{
		return (1);
	}
	if (s[start] == s[end])
	{
		return (is_palindrome_helper(s, start + 1, end - 1));
	}
	return (0);
}
