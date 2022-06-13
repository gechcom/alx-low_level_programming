#include "main.h"
#include <stdio.h>
/**
 * print_rev - print string in a reverse direction
 * @s: string parameter
 * Return: nothhing
 */

void print_rev(char *s)
{
	int i, len;

	len = strlen(s);

	for (i = len; i >=0 ; --i)
	{
		_putchar(s[i]);
	
	}

	_putchar('\n);

}
