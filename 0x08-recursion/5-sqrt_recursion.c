#include "main.h"

/**
 * _sqrt_recursion_wrapper - a wrapper that does the recursion bit
 * @n: input number
 * @min: minium of a guess
 * @max: maximum of a guess
 * Return: square root of a number
 */

int _sqrt_recursion_wrapper(int n, int min, int max)
{
	int guess, sqr_guess;

	guess = (min + max) / 2;
	sqr_guess = guess * guess;

	if (sqr_guess == n)
		return (guess);
	else if (min == max)
		return (-1);
	else if (sqr_guess < n)
		return (_sqrt_recursion_wrapper(n, guess + 1, max));
	else
		return (_sqrt_recursion_wrapper(n, min, guess - 1));

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
	return (_sqrt_recursion_wrapper(n, 1, n));
}
