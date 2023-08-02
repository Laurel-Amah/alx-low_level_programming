#include "main.h"

/**
 * _strspn - gets the length of a prefix substring.
 *
 * @s: The string to be searched
 * @accept: The prefix to be measured
 *
 * Return: Number of bytes in the initial segment
 * of @s which consist only of bytes from @accept
 */
unsigned int _strspn(char *s, char *accept)
{
	unsigned int byte = 0;
	int i;

	while (*s)
	{
		for (i = 0; accept[i]; i++)
		{
			if (*s == accept[i])
			{
				byte++;
				break;
			}

			else if (accept[i + 1] == '\0')
				return (byte);
		}

		s++;
	}

	return (byte);
}
