#include <stdio.h>
#include <stdlib.h>

/**
 * main - print multile of two numbers
 * @argc: no of argument command lines
 * @argv: comand lines
 * Return: 0 always sucess
 */

int main(int argc, char *argv[])
{
	int p;

	if (argc != 3)
	{
		printf("Error\n");
		return (0);
	}
	else
	{
		p = atoi(argv[1]) * atoi(argv[2]);
		printf("%d\n", p);
	}
	return (0);
}
