#include <stdio.h>

/**
 * main - print the name of the program
 * @argc: the number of command line arguments
 * @argv: the command line arguments
 * Return: 0 sucess
 */

int main(int argc, char *argv[])
{
	(void) argc;

	printf("%s\n", argv[0]);

	return (0);
}
