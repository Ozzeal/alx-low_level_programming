
#include <stdio.h>

/**
 * main - Prints all possible combinations of two two-digit numbers,
 *        ranging from 0-99, separated by a comma followed by a space.
 *
 * Return: Always 0.
 */
int main(void)
{
	int k, m;

	for (k = 0; k < 99; k++)
	{
		for (m = k + 1; m < 100; m++)
		{
			putchar((k / 10) + '0');
			putchar((k % 10) + '0');
			putchar(' ');
			putchar((m / 10) + '0');
			putchar((m % 10) + '0');

			if (k == 98 && m == 99)
				continue;

			putchar(',');
			putchar(' ');
		}
	}
	putchar(10);
	return (0);
}
