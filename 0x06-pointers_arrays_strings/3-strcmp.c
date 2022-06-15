#include "main.h"

/**
 * _strcmp - funcation to compare strings
 * @s1: string 1
 * @s2: string 2
 * Return: 1 if if the two strings are differ and 0 if they are equal
 */

int _strcmp(char *s1, char *s2)
{
	int i = 0, flag = 0;

	while (s1[i] != '\0' && s2[i] != '\0')
	{
		if (s1[i] != s2[i])
		{
			flag = 1;
			break;
		}

		i++;
	}

	if (flag == 0)
		return 0;
	else
		return 1;

}
