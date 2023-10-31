#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * str_concat - Concatenates two strings.
 *
 * @s1: first string
 *
 * @s2: second string
 *
 * Return: Always 0.
 */
char *str_concat(char *s1, char *s2)
{
	size_t ln1, ln2, i, j;
	char *ptr;

	if (s1 == NULL)
	{
		s1 = "";
	}
	if (s2 == NULL)
	{
		s2 = "";
	}
	ln1 = 0;
	while (s1[ln1] != '\0')
	{
		ln1++;
	}
	ln2 = 0;
	while (s2[ln2] != '\0')
	{
		ln2++;
	}
	ptr = malloc(sizeof(char) * (ln1 + ln2 + 1));

	if (ptr == NULL)
	{
		free(ptr);
		return (NULL);
	}
	for (i = 0; i < ln1; i++)
	{
		ptr[i] = s1[i];
	}
	for (j = 0; j <= ln2; j++)
	{
		ptr[i] = s2[j];
		i++;
	}
	return (ptr);
}
