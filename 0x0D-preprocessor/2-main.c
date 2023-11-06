#include "2-main.h"
#include <stdio.h>

/**
 * printFileName - Prints the file where the code is run
 *
 * Return: Always 0.
 */
void printFileName(void)
{
	printf(__FILE__"\n");
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
