#include <stdio.h>
#include "main.h"

/**
 * main - prints progrman name
 * @argc: argument count
 * @argv: argument array
 *
 * Return: Always 0 (Success)
 */
int main(int argc __attribute__((unused)), char *argv[])
{
	printf("%s\n", *argv);
	return (0);
}
