#include "variadic_functions.h"
#include <stdio.h>

/**
 * print_numbers - prints numbers.
 * @separator: string to be printed between numbers.
 * @n: number of integers passed to the function.
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	int print;

	va_list args;

	va_start(args, n);
	if (separator == NULL)
	{
		for (i = 0; i < n; i++)
		{
			print = va_arg(args, int);
			printf("%d\n", print);
		}
	}
	for (i = 0; i < n; i++)
	{
		print = va_arg(args, int);
		printf("%d %s", print, separator);
	}
	printf("\n");
	va_end(args);
}
