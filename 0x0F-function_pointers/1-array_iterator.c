#include "function_pointers.h"

/**
 * array_iterator - executes a function given as a parameter on each element of an array.
 * @size: size of the array.
 * @action: A pointer to the function
 * @array: The array
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	size_t i = -1;

	if (array && action)
	{
		while (++i < size)
			action(array[i]);

	}
}
