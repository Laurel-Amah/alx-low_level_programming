#include "main.h"

/**
 * *create_array - creates an array of chars.
 * and initializes it with a specific char.
 * @size: the size of the array
 * @c: the char to be used to initialize the array.
 *
 * Return: A pointer to the array.
 * or NULL if size = 0.
 */
char *create_array(unsigned int size, char c)
{
	char *arr;
	unsigned int  i;

	if (size == 0)
		return (NULL);
	arr = malloc(sizeof(char) * size);

	if (arr == NULL)
		return (NULL);
	for (i = 0; i < size; i++)
		arr[i] = c;
	return (arr);
}
