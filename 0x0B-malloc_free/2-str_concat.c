#include "main.h"

/**
 * str_concat - a function that concatinates two strings
 * @s1: string one
 * @s2: String two
 * Return: concatinated string
 */

char *str_concat(char *s1, char *s2)
{
	int i, j;
	int len1 = 0, len2 = 0;
	char *s;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	while (s1[len1] != '\0')
		len1++;
	while (s2[len2] != '\0')
		len2++;
	s = malloc((len1 * sizeof(char)) + ((len2 + 1) * sizeof(char)));

	if (s == NULL)
		return (NULL);
	for (i = 0; s1[i] != '\0'; i++)
		s[i] = s1[i];

	for (j = 0; s2[j] != '\0'; j++)
	{
		s[i] = s2[j];
		i++;
	}
	return (s);


}
