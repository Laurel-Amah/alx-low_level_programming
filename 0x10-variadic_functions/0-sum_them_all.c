
#include "variadic_functions.h"
#include <stdarg.h>

/**
* sum_them_all - compute sum of all its parameters.
*
* @n: number of parameters passed to function.
*
* Return: sum, fail otherwise.
*/
int sum_them_all(const unsigned int n, ...)
{
	va_list num;
	unsigned int i = 0, sum = 0;

	va_start(num, n);

	while (i < n)
	{
		sum += va_arg(num, int);
		i++;
	}

	va_end(num);

	return (sum);
}
