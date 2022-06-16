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
	if (s != NULL)
	{
		char* current_char = s;


		while ( *current_char != '\0')
		{
			if ((*current_char >= 97 && *current_char <= 122) || (*current_char >= 65 && *current_char <= 90))
			{
				if (*current_char > 109 || (*current_char > 77 && *current_char < 91))
				{
					*current_char -= 13;
				}
				else
				{
					*current_char += 13;
				}
			}

		current_char++;
		}
	}
	return (s);
}
