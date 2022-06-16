#include "main.h"
#include <stddef.h>
#include <stdlib.h>
#include <string.h>

/**
 * rot13 - a function encoding using ro13 which is a function takes a string and returns the string ciphered with
 * Rot13. if there are number or special characterstics included in the string, they are returned as they are.
 * 
 * @s: string input
 * Return: encoded string
 */

char *rot13(char *s)
{
	if(s != NULL)
	{
		char *ch = s;

		while(*ch != '\0')
		{
			if((ch >= 97 && *ch <= 122) || (*ch >= 65 && *ch <= 90))
			{
				if(*ch > 109 || (*ch > 77 && *ch < 91))
				{
					*ch -= 13;
				}
				else
				{
					*ch += 13;
				}
			}
			ch++;
		}
	}

	return (s);
}

