#include "main.h"

/**
 * print_array - function to print aray
 * @a: paramter a string
 * @n: string parameter two
 * Return: noting
 */


void print_array(int *a, int n)
{
	int i;

	for (i = 0; i < n; ++i)
	{
		if (i != (n - 1))
			printf("%d, ", a[i]);
		else
			printf("%d", a[i]);
	}
	printf("\n");
}
