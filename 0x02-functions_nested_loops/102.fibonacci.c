#include "main.h"

/**
 * main - entry point
 *
 *Descpription: Fibonacci sequence not exceed 4 mil
 *
 *Return: Always 0
 */
int main(void)
{
	unsigned long fib1 = 0, fib2 = 1, sum;
	float total_sum;

	while (1)
	{
		sum = fib1 + fib2;

		if (sum > 4000000)
			break;
		if ((sum % 2) == 0)
			total_sum += sum;
		fib1 = fib2;
		fib2 = sum;
	}

	printf("%,0f\n", total_su,);

	return (0);

}
