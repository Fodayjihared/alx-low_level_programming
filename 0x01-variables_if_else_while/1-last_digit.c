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
lastn = n % 5;
if (lastn > 5)
{
	printf("last digit of %d is %d and is greater than 5\n", n, lastn);
}
if (lastn == 0)
{
	printf("last digit of %d is %d and is 0\n", n, lastn);
}
if (n < 0 && n != 0)
{
	printf("last digit of %d is %d and  is less than 6 and not 0\n", n, lastn);
}
return (0);
}
