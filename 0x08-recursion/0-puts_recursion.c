#include "main.h"

/**
 * _puts_recursion - a function that prints a string followed by a new line
 * @s: a ponter string
 * Return: nothing
 */

void _puts_recursion(char *s)
{
	if (s == NULL || s == '\0')
		return ;
	s++;
	_putchar(s);
	_puts_recursion(s);	
}
