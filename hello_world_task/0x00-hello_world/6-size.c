#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	printf("the Size of a char: %d byte(s)\n", sizeof(char));
	printf("the size of an int: %d byte(s)\n", sizeof(int));
	printf("the size of a long int: %d byte(S)\n", sizeof(long int));
	printf("the size of a long long int: %d byte(s)\n", sizeof(long long int));
	printf("the size of a float: %d byte(s)\n", sizeof(float));
	return (0);
}
