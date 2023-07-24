#include "main.h"

/**
 * _strlen - returns the length of a string.
 *
 * @s: The string to get the length of
 *
 * Return: Length of string
 */
int _strlen(char *s)
{
	int length = 0;

	while (*s++)
		length++;

	return (length);
}

