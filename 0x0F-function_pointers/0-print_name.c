#include "function_pointers.h"

/**
 * print_name - print a name
 * @name: The name
 * @f: pointer to the function to call
 * Rturn: nothinig
 */

void print_name(char *name, void (*f)(char *))
{
	if ((*f) == NULL)
		return;
	(*f)(name);
}
