#include "main.h"

/**
 * *malloc_checked - allocates memory using malloc.
 * @b : size of the memory to be allocated.
 *
 * Return: An address to the allocated memory.
 */
void *malloc_checked(unsigned int b)
{
	int *chk;

	chk = malloc(b);

	if (chk == NULL)
		exit(98);

	return (chk);
}
