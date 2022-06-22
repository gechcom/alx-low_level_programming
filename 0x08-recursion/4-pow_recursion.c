#include "main.h"

/**
 * _pow_recursion - returns the value of x raised to the power of y
 * @x: base number input
 * @y: power input
 * Return: the power of a number
 */

int _pow_recursion(int x, int y)
{
	if (x == 0 && y >= 0)
		return (0);
	if (x != 0 && y == 0)
		return (1);
	return (x * _pow_recursion(x, y - 1));
}
