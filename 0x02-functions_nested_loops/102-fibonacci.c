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
	int count;


	for (count = 0; count < 50; ++count)
	{
		sum = fib1 + fib2;
		printf("%lu", sum);

		fib1 = fib2;
		fib2 = sum;

		if (count == 49)
			printf("\n");
		else
			printf(", ");
	}

	return (0);

}
