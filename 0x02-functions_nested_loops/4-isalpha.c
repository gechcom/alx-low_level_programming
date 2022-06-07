#include"main.h"
#include<ctype.h>

/**
 * _isalpha - checks lowercase and uppercase
 *
 * @c: takes input from other functions.
 *
 * Return: 1 is c if true else 0
 */


int _isalpha(int c)
{
	if (isalpha(c))
	{
		return (1);
	}

	return (0);

}
