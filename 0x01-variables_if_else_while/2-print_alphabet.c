#include <stdio.h>

/**
 * main - Entry Point
 *
 * Description: Prints the alphabeth in lowercase
 *
 *Return: Always 0 (Success)
 */

int main(void)

{
	char let[26] = "abcdefghijklmnopqrstuvwsyz";
	int i;

	for (i = 0; i < 26; i++)
	{
		putchar(let[i]);
	}
	putchar(10);
	return (0);
}
