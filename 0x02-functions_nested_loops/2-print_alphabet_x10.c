#include "main.h"
/**
 * main - prints 10 times the alphabet
 * 	in lowercase, followed by a new line.
 * return: void
 */
void print_alphabet_x10(void)
{
	char letter;
	int i=0;
	while (i <= 9)
	{
		for (letter = 'a'; letter <= 'z'; letter++)
			_putchar(letter);
		_putchar('\n');
		i++;
	}

}

