#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * main - Entry point
 *
 * Description:Prints alphabet in lower
 * except q and e
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	char let[26] = "abcdefghijklmnopqrstuvwxy";
	int i;

	for (i = 97; i < 123; i++)
	{
		if (i != 101 && i != 113)
		{
			putchar(i);
		}
	}
	putchar(10);
	return (0);
}
