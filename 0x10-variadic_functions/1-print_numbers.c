#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>

/**
 * print_numbers - Prints numbers and new line
 * @separator: The string separator
 * @n: The number of integers passed
 * @...: A variable number
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list args;
	unsigned int index;

	va_start(args, n);

	for (index = 0; index < n; index++)
	{
		printf("%d", va_arg(args, int));

		if (index != (n - 1) && separator != NULL)
			printf("%s", separator);
	}

	printf("\n");
	va_end(args);
}
