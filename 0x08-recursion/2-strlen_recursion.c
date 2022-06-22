#include "main.h"

/**
 * _strlen_recursion - reurns the length of a string
 * @s: string input
 * Return: length of a string given
 */

int _strlen_recursion(char *s)
{
	int i = 0;

	if (*s != '\0')
	{
		i++;
		_strlen_recursion(s + 1);
	}
	return (i);
}
