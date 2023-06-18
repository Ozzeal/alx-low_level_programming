#include <stdio.h>

/**
 * main - Entry point
 *
 * Description:Prints alphabet in lowercase and uppercase
 *
 * Return: Always 0 (Success)
 */

int main(void)

{
	char let[52] = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ";
	int i;

	for (i = 0 ; i < 52; i++)
	{
		putchar(let[i]);
	}
	putchar(10);
	return (0);
}
