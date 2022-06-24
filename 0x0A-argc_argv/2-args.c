#include <stdio.h>

/**
 * main - print command lines
 * @argc: num of comand line
 * @argv: comand lines arguments
 * Return: 0 always
 */

int main(int argc, char *argv[])
{
	int i;

	for (i = 0; i < argc; i++)
		printf("%s\n", argv[i]);

	return (0);
}
