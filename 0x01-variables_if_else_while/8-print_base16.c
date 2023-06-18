#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * main - Prints all the number of base 16
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	int i;

	for (i = 48; i < 58; i++)
	{
		putchar(i);
	}
	for  (i = 97; i < 103; i++)
	{
		putchar(i);
	}
	putchar(10);
	return (0);
}
