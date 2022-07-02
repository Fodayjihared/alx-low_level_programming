#include <stdlib.h>

#include <time.h>

#include <stdio.h>



/**
 * main - Entry point
 *
 *
 *
 *
 *
 *
 *
 * Return: Always 0 (Success)
 *
 *
 *
 */

int main(void)
{
int n;
srand(time(0));
n = rand() - RAND_MAX / 2;
printf("Last digit of %d is ", n);
if (n > 5)
{
	printf("greater than 5\n");
}
if (n == 0)
{
	printf("0\n");
}
if (n < 0 && n != 0)
{
	printf("less than 6 not 0\n");
}
printf("\n");
return (0);
}
