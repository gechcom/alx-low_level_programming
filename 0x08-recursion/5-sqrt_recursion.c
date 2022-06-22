#include "main.h"

/**
 * _sqrt_recursion_wrapper - a wrapper that does the recursion bit
 * input number
 * @i: minium of a guess
 * @j: maximum of a guess
 * Return: square root of a number
 */

int _sqrt_recursion_wrapper(int i, int j)
{
	int sqr_num;

	sqr_num = i * i;

	if (sqr_num == j)
		return (i);
	else if (sqr_num > j)
		return (-1);
	return (_sqrt_recursion_wrapper(i + 1, c));

}
/**
 * _sqrt_recursion - a function that returns a square root of a number
 * @n: a number
 * Return: square rooted value
 */

int _sqrt_recursion(int n)
{
	if (n < 0)
		return (-1);
	if (n == 0)
		return (0);
	if (n == 1)
		return (1);
	return (_sqrt_recursion_wrapper(1, n));
}
