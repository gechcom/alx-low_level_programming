#include "main.h"

/**
 * swap_int - swap twointege values
 *
 * @a: integer one
 * @b: integer two
 *
 * Return: nothing
 */

void swap_int(int *a, int *b)
{
	int temp;

	temp = *a;
	*a = *b;
	*b = temp;
}
