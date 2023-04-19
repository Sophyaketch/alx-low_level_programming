#include "function_pointers.h"

/**
 * print_name - it prints a name.
 * @name: name to be printed.
 * @p: pointer to the function that prints a name.
 */
void print_name(char *name, void (*p)(char *))
{
	if (name == NULL || p == NULL)
		return;

	p(name);
}
