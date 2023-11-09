#include "variadic_functions.h"
#include <stdarg.h>

/**
 * sum_them_all - Returns the sum of paramters.
 * @n: The number.
 * @...: A variable number of paramters.
 *
 * Return: Always (0)
 */
int sum_them_all(const unsigned int n, ...)
{
	va_list args;
	unsigned int i, sum = 0;

	va_start(args, n);

	for (i = 0; i < n; i++)
		sum += va_arg(args, int);

	va_end(args);

	return (sum);
}
