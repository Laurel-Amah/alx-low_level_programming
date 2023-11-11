#include "function_pointers.h"

/**
 * print_name - prints a name.
 * @name: The name to be printed.
 * @f: A pointer to the function.
 */
void print_name(char *name, void (*f)(char *))
{
	(*f)(name);
}
