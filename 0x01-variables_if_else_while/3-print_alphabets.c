#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	char lower_char = 'a';
	char upper_char = 'A';

	while (lower_char <= 'z')
	{
		putchar(lower_char);
		lower_char++;
	}

	while (upper_char <= 'Z')
	{
		putchar(upper_char);
		upper_char++;
	}
	putchar('\n');
	return (0);
}
