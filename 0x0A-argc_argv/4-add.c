#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

/**
 * main - add posetive numbers
 * @argc: num of arguments
 * @argv: arguments line
 * Return: 0 success
 */

int main(int argc, char *argv[])
{
	int i;
	unsigned int sum = 0;

	for (i = 1; i < argc; i++)
	{
		if (is_positive(argv[i]))
		{
			sum += atoi(argv[i]);
			printf("%d\n", sum);
		}
		else
		{
			printf("Error\n");
			return (1);
		}
	}
	return (0);
}

/**
 * is_positive - check if a number contains only digits
 * @num: The string to chekc
 * Return: 1 if posetive and 0 if not
 */

int is_positive(char *num)
{
	int i;

	for (i = 0; num[i] != '\0'; i++)
	{
		if (!isdigit(num[i]))
			return (0);
	}

	return (1);
}

