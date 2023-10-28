#include <stdio.h>

/**
 * main - prints all arguments it recieves.
 * @argc: number of arguments passed.
 * @argv: an array of pointer to the arguments.
 *
 * Return: always 0.
 */
int main(int argc, char *argv[])
{
	int i;

	for (i = 0; i < argc; i++)
		printf("%s\n", argv[i]);
	return (0);
}
