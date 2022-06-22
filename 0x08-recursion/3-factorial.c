#include "main.h"

/**
 * factorial - return a factorial of a given  number
 * @n: number input
 * Return: factorial of a number
 */

int factorial(int n)
{
	if (n == 0 || n == 1)
		return (1);
	return (n * factorial(n - 1));
}

