#include <stdio.h>

void __attribute__((constructor))printhere(void);

/**
 *printhere - Prints a string before the
 *        main function is executed.
 */
voidprinthere(void)
{
	printf("You're beat! and yet, you must allow,\n"
	       "I bore my house upon my back!\n");
}
