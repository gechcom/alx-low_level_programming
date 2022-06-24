#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <stdbool.h>

/**
 * main - that prints the minimum number of coins to
 * make change for an amount of money
 * @argc: num of command lines
 * @argv: command arguments
 * Return: o always sucess
 */

int main(int argc, char *argv[])
{
	int cents;

	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}

	cents = atoi(argv[1]);
	if (cents <= 0)
	{
		printf("0\n");
		return (0);
	}

	if (!is_positive(argv[1]))
	{
		printf("Error\n");
		return (1);
	}
	printf("%d\n", num_of_coins(cents));

	return (0);

}

/**
 * is_positive - check if a string contains only digits
 * @num: the strinig check
 * Return: true if digit or false otherwise
 */

bool is_positive(char *num)
{
	int i;

	for (i = 0; num[i] != '\0'; i++)
	{
		if (!isdigit(num[i]))
			return (false);
	}

	return (true);
}

/**
 * num_of_coins - Deterime the minimum number of coins
 * to make change
 * @cents: change amount
 * Return: change amount
 */

int num_of_coins(int cents)
{
	int coins = 0;

	coins += (cents / 25);
	cents %= 25;

	coins += (cents / 10);
	cents %= 10;

	coins += (cents / 5);
	cents %= 5;

	coins += (cents / 2);
	cents %= 2;

	coins += cents;

	return (coins);
}
