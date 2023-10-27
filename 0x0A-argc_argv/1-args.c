#include <stdio.h>

/**
 * main - Prints the number of arguments passed into it.
 * @argc: number of arguments passed.
 * @argv: an array of pointers to the arguments.
 *
 * Return: always 0.
 */
int main(int argc, char __attribute__((__unused__)) *argv[])
{
	printf("%d\n", argc - 1);

	return (0);
}
