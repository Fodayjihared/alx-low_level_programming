#include "2-main.h"
#include <stdio.h>

/**
 * printFileName - Prints the file where the code is run
 *
 * Return: Always 0.
 */
void printFileName(void)
{
	printf("Compiled from file: %s\n", __FILE__);
}

/**
 * main - main entry of the program
 * Return: always 0.
 */
int main(void)
{
	printFileName();
	return (0);
}
