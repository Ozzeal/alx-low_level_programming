#include <stdio.h>
/**
 * main - multiple the argument
 * @argc: argument count
 * @argv: array of argument
 *
 * Return : Always 0
 *
 */

int main(int argc, char *argv[])
{
	int i;
	int result;

	if (argc != 3)
	{
		printf("Error\n");
		return (1);
	}

	sum = atoi(argv[1]) * atoi(argv[2]);
	printf("%d\n", sum);

	return (0);
}
