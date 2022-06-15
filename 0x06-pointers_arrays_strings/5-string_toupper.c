#include "main.h"

/**
 * string_toupper - change to to upper case function
 * @s: string needs to be changed to upperrcase
 * Return: @s
 */

char *string_toupper(char *s)
{
	int i = 0;

	while (s[i] != '\0')
	{
		/*Compare charactre based on thier ASCII Code*/

		if(s[i] >= 97 && s[i] <= 122)
			s[i] = s[i] - 32;
		i++;
	}

	return (s);
}
