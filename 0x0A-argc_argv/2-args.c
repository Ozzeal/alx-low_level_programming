#include <stdio.h>

/**
 * main - this print all arguments
 * @argc: argument count
 * @argv: array of character
 *
 * Return: Always 0
 */

int main(int argc, char **argv)
{
	int i = 0;

	if (argc)
	{
		while (i < argc)
			printf("%s\n", argv[i]);
		i++;
	}

	return (0);
}
