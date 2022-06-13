#include "main.h"
#include <stdio.h>

/**
 * rev_string - function to reverse a sting
 * @s: string parameter
 * return Nothing
 */

void rev_string(char *s)
{
	int l, i;
	char ch;

	l = 0;

	/*length of the string*/
	while (l != '\0')
		l++;

	/* swap the string*/
	for (i = 0; i < l/2; ++l)
	{
		ch = s[i];
		s[i] = s[l - 1 - i]; /* we deduct 1 since the array is always begin with 0*/
		s[l - 1 -i] = ch;
	}


}
