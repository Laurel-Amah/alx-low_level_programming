#include "main.h"

/**
 * print_rev - Prints string in reverse
 *
 * @s: String to be printed
 *
 * Return: void
 */
void print_rev(char *s)
{
	int ls = 0, index;

	while (s[ls++])
		ls++;

	for (index = ls - 1; index >= 0; index--)
		_putchar(s[index]);

	_putchar('\n');
}
