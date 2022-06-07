#include "main.h"

/**
 * print_sign - print +, 0, -
 *
 * @n: takes interger
 *
 * Return: 1,  0 and -1
 */

int print_sign(int n)
{
	if (n > 0)
	{
		_putchar(43 + 0);
		return (1);
	}
	else if (n == 0)
	{
		_putchar(48 + 0);
		return (0);
	}
	else
	{
		_putchar(45 + 0);
		return (-1);
	}
}
