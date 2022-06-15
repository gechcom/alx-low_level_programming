#include "main.h"
/**
 * reverse_array - function that reverse its array
 * @a: array
 * @n: num of elements
 * Return: Nothing
 */

void reverse_array(int *a, int n)
{
	int i, temp;

	for (i = 0; i < n / 2; i++)
	{
		temp = a[i];
		a[i] = a[n-i-1];
		a[n-i-1] = temp;
	}
}
