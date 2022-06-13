#include "main.h"
#include <stdio.h>

/**
 * rev_string - function to reverse a sting
 * @s: string parameter
 * return Nothing
 */

void rev_string(char *s)
{
	int l, i = 0;
	int temp;
	int e;

	/*length of the string*/
	while (s[l] != '\0')
		l++;

	e = l - 1;
	l /= 2;
	/* swap the string*/


	while (l--)
	{
		temp = s[i];
		s[i] = s[e]; /* we deduct 1 since the array is always begin with 0*/
		s[e] = temp;
		i++;
		e--;
	}


}
