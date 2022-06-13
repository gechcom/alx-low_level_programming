#include "main.h"
#include <stdio.h>

/**
 * print_rev - print string in reverse order
 * @s: string parameter
 * Return: NOthing
 */

void print_rev(char *s)
{
	int index;

	index = 0;

	while (s[index] != '\0')
		index++;
	for (--index; index >= 0; --index)
		_putchar(s[index]);
	_putchar('\n');
}
