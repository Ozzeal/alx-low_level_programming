#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main - Entry Point
 *
 * Descripion:determine if the last digit is
 * less than six or greater than five
 * or equal to zero
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	int n, ozy;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	ozy = n % 10;
	if (ozy > 5)
	{
		printf("Last digit of %d is %d and is greater than 5\n", n, ozy);
	}
	else if (ozy == 0)
	{
		printf("Last digit of %d is %d and is 0\n", n, ozy);
	}
	else
	{
		printf("Last digit of %d is %d and is less than 6 and not 0\n", n, ozy);
	}
	return (0);
}
