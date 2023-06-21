#include "main.h"
/**
 * _isalpha - Shoows 1 if the input is a letter
 *  Shows 0 if the input is other cases
 *
 *  @c; The character in ASCII code
 *
 *  Return: 1 for letter. 0 for the rest.
 */
int _isalpha(int c)
{
	if ((c >= 97 && c <= 122) || (c >= 65 && c <= 90))
	{
		return (1);
	}
	else
	{
		return (0);
	}
	_putchar('\n')
}
