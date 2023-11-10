#include "variadic_functions.h"

/**
 * sum_them_all - Sums all its parameters.
 * @n : number of arguments to be summed.
 *
 * Return: Sum of parameters
 */
int sum_them_all(const unsigned int n, ...)
{
	unsigned int i;
	int sum;

	va_list args;

	va_start(args, n);

	if (n == 0)
		return (0);
	sum = 0;
	for (i = 0; i < n; i++)
		sum += va_arg(args, int);
	va_end(args);
	return (sum);
}
