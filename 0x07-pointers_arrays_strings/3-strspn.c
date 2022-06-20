#include "main.h"

/**
 * _strspn - function to geth the prefix length
 * @s: pointer to the string
 * @accept: subtracting prefix
 * Return: number of bytes in the intial segment
 *
 */

unsigned int _strspn(char *s, char *accept)
{
	int i, j, f;

	for (i = 0; s[i] != '\0'; i++)
	{
		flag = 1; 
		for (j = 0; accept[j] != '\0'; j++)
		{
			if (s[i] == accept[j])
			{
				flag = 0;
				break;
			}
		}
		if ( flag == 1)
			break;
	}

	return (i);
}

