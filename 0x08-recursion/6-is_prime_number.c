#include "main.h"

/**
 * _is_prime_wraper - checking prime numbers
 * @f: factor check
 * @p: posible prime number
 * Return: 1 if prime, o if not
 */

int _is_prime_wraper(int f, int p)
{
	if (p < 2 || p % f == 0)
		return (0);
	else if (f > p / 2)
		return (1);
	else
		return (_is_prime_wraper(f + 1, p));
}

/**
 * is_prime_number - check if the input number is prime number
 * @n: Number
 * Return: NOthing
 */

int is_prime_number(int n)
{
	if (n == 2)
		return (1);
	return (_is_prime_wraper(2, n));
}

