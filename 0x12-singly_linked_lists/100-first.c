#include <stdio.h>

void bfmain(void) __attribute__((constructor));

/**
 * bfmain - executes before main function
 *
 */
void bfmain(void)
{
	printf("You're beat! and yet, you must allow,\n");
	printf("I bore my house upon my back!\n");
}

