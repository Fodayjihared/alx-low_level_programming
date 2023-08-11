#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	char alp = 'a';

	while (alp <= 'z')
	{
		if (alp == 'q' && alp == 'e')
		{
			continue;
		} else
		{
			putchar(alp);
		}
		alp++;
	}
	return (0);
}
