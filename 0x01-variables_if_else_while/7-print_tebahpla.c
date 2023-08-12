#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	char initial = 'z';

	while (initial >= 'a')
	{
		putchar(initial);
		--initial;
	}
	putchar('\n');
	return (0);
}
