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
	char temp;

	if (*s != '\0')
	{
		temp = strrev(s);
		_putchar(*temp);
		_print_rev_recursion(temp + 1);
	}

	else
		_putchar('\n');
}
