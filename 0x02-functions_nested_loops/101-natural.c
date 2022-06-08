#include "main.h"

/**
 * main - entry point
 *
 *Descpription: cum of all the multiplie of 3  0r 5 below 1024
 *
 *Return: Always 0
 */
int main(void)
{
	int x, sum;

	for (x = 0; x <= 1024; ++x)
	{
		if ((x % 3 == 0) || (x % 5 == 0))
			sum += x;
	}
	printf("%d\n", sum);

	return (0);

}
