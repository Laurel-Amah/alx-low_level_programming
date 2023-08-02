#include "main.h"

/**
 * _strchr - locates a character in a string
 *
 * @s: The string to be searched
 * @c: The cHaracter to be located in the string
 *
 * Return: pointer to first occurence of character c
 * or NULL if character is not found.
 */
char *_strchr(char *s, char c)
{
	int i;

	for (i = 0; s[i] >= '\0'; i++)
	{
		if (s[i] == c)
			return (s + i);
	}

	return ('\0');
}
