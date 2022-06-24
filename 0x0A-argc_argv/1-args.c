#include <stdio.h>

/**
 * main - print the number of command line arguments
 * @argc: number of comand lines
 * @argv: command line arguments
 * Return: 0 sucess
 */

int main(int argc, char *argv[])
{
	(void) argv;

	printf("%d\n", argc - 1);
	return (0);
}
