#include "main.h"
#include <string.h>

/**
 * _print_rev_recursion - a function that prints
 * a string followed by a new line
 * @s: a ponter string
 * Return: nothing
 */

void _print_rev_recursion(char *s)
{

	if (*s != '\0')
	{
		_print_rev_recursion(s + 1);
		_putchar(*s);
	}

	else
		_putchar('\n');
}
