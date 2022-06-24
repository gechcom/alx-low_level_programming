#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>

/**
 * is_positive - check if a number contains only digits
 * @num: The string to chekc
 * Return: 1 if posetive and 0 if not
 */

int is_positive(char *num)
{
	int i, l = strlen(num);

	for (i = 0; i < l; i++)
	{
		if (!isdigit(num[i]))
			return (0);
	}

	return (1);
}



/**
 * main - add posetive numbers
 * @argc: num of arguments
 * @argv: arguments line
 * Return: 0 success
 */

int main(int argc, char *argv[])
{
	int i, sum = 0;

	if (argc == 1)
	{
		printf("0\n");
	}
	else
	{

		for (i = 1; i < argc; i++)
		{
			if (is_positive(argv[i]))
			{
				sum += atoi(argv[i]);

			}
			else
			{
				printf("Error\n");
				return (1);
			}
		}
	}

	printf("%d\n", sum);

	return (0);
}


