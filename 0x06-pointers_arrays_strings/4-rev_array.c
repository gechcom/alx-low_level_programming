#include "main.h"
/**
 * reverse_array - function that reverse its array
 * @a: array
 * @n: num of elements
 * Return: Nothing
 */

void reverse_array(int *a, int n)
{
	int i, temp, j;

	j = n - 1;

	for (i = 0; i < j; i++)
	{
		temp = a[i];
		a[i] = a[j];
		a[j] = temp;
		j--;
	}
}
