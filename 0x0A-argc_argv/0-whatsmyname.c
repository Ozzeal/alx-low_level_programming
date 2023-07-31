#include <stdio.h>

/**
 * main - this prints the name of the first
 * argument passed to the gcc
 * @argc: argument count
 * @argv: array of argument
 *
 * Return: Always 0
 */

int main(int argc __attribute__((unused)), char *argv[])
{
	printf("%s\n", argv[0]);
	return (0);
}
