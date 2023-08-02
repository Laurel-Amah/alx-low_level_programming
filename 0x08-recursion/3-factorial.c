#include "main.h"

/**
 * factorial - returns the factorial of a given number.
 *
 * @n: The number to find the factorial of
 *
 * Return: -1 if @n is lower than 0;
 * 1 if @n is equal to 0;
 */
int factorial(int n)
{
	if (n < 0)
	{
		return (-1);
	}
	else if (n == 0)
	{
		return (1);
	}
	else
	{
		return (n * factorial(n - 1));
	}
}

